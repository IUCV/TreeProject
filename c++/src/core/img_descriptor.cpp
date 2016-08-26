#include <tbb/tbb.h>
#include "core/img_descriptor.h"
#include <fstream>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <QTextEdit>

using namespace std;
using namespace cv;
using namespace cls;


FeatureExtractor::FeatureExtractor()
{
    feature_extractors.push_back(make_shared<GIST>());
}

vector<string> FeatureExtractor::getFeatureNames(){
    vector<string> names;
    for (const auto& ex : feature_extractors) 
        names.push_back((ex->featureName()));
    return names;
}

void FeatureExtractor::setFeatures(const FeatureFlag& flag)
{
    feature_extractors.clear();
    if (flag & GIST_DESC)    feature_extractors.push_back(make_shared<GIST>());
    if (flag & LAPL_RGB)     feature_extractors.push_back(make_shared<LaplRGB>());
    if (flag & HSV_HIST)     feature_extractors.push_back(make_shared<HSVHist>());
    if (flag & FOURIER_HIST) feature_extractors.push_back(make_shared<FourierHist>());
    if (flag & HOUGH_HIST)   feature_extractors.push_back(make_shared<HoughHist>());
    if (flag & DEEP_OVERFEAT)   feature_extractors.push_back(make_shared<DEEP>());
}


void FeatureExtractor::setGISTParams(const GISTParams& params)
{
    GIST::setParams(params);
}


void FeatureExtractor::extract(const Mat& samples, vector<cv::Mat>& ft_vec, QTextEdit *qte)
{
    auto scale_ptr = scale_mat.ptr<float>();
    for (const auto& ex : feature_extractors) {
        int ft_dim = ex->size();
        cv::Mat features(1, ft_dim, CV_32FC1);

        float* data = features.ptr<float>();
        vector<float> ft;
        ex->extract(samples, ft);
        memcpy(data, ft.data(), ft_dim * sizeof(float));

        // Scale each column to [0, 1]
        float a = *scale_ptr++;
        float b = *scale_ptr++;
        features = a*features + b;

        ft_vec.push_back(features);
    }
}


void FeatureExtractor::extract(const vector<ImageFile>& samples, vector<cv::Mat>& ft_vec, QTextEdit *qte)
{
    scale_mat.release();
    scale_mat.create(feature_extractors.size(), 2, CV_32F);
    auto scale_ptr = scale_mat.ptr<float>();
    

    for (const auto& ex : feature_extractors) {
        cout << "Extracting feature " << ex->featureName() << "...";
        cout.flush();
        qte->append("Extracting feature " + QString(ex->featureName().c_str()) + "...");
	qte->repaint();
        int ft_dim = ex->size();
        cv::Mat features(samples.size(), ft_dim, CV_32FC1);

        tbb::parallel_for(0, features.rows, [&samples, &features, &ex, ft_dim](int i) {
            float* data = features.ptr<float>(i);
            string name = ((String)samples[i]).substr(((String)samples[i]).rfind("/")+1, ((String)samples[i]).rfind(".")); 
            
            ifstream feat("precompute_features/"+ex->featureName()+"_"+name+".txt");
            if(feat.is_open()){

                for(int f = 0; f < ft_dim; f++)
                    feat >> data[f];
                feat.close();

            }
            else{
                vector<float> ft;
                ex->extract(samples[i], ft);
                memcpy(data, ft.data(), ft_dim * sizeof(float));
		
		DIR *dir;
		if(dir = opendir("precompute_features"))
		    closedir(dir);
		else
		  mkdir("precompute_features", 0777);

                ofstream feat("precompute_features/"+ex->featureName()+"_"+name+".txt");
		if(ex->featureName() == "Deep OverFeat")
		  cout << ex->featureName() << " " << name << " ";
                if(feat.is_open()){
		  int zero_ct=0;
                    for(int f = 0; f < ft_dim; f++)
		      {
			if(data[f] == 0)
			  zero_ct++;
                        feat << data[f] << " ";
		      }

			if(ex->featureName() == "Deep OverFeat")
			  cout << zero_ct << endl;

                    feat.close();
                }

            }
            cout << ".";
            cout.flush();
        });
        
        cout << "done" << endl;
        qte->append("Done.");
	qte->repaint();

        // Scale value range to [0, 1]
        auto minmax_val = minmax_element(features.begin<float>(), features.end<float>());
        float a = 2.f / (*minmax_val.second - *minmax_val.first);
        float b = -(*minmax_val.second + *minmax_val.first) /
                   (*minmax_val.second - *minmax_val.first);
        features = a*features + b;
        *scale_ptr++ = a;
        *scale_ptr++ = b;

        ft_vec.push_back(features);
    }
    cout << string(50, '-') << endl;
}
