#include <QDir>
#include "obj_ident_app.h"

using namespace std;
using namespace cv;
using namespace cls;


void FloraIdentApp::setSettings(const FloraIdentSettings& settings)
{
    this->settings = settings;
    flora_ident.changeSettings(settings.used_features, settings.gist_params,
                               settings.clear_precomp_features);
}

void FloraIdentApp::setLearningRate(int learning_rate)
{
    settings.learning_rate = learning_rate;
}

bool FloraIdentApp::loadDataset(const string& dir_name)
{
    flora_ident.clearData();

    settings.used_features[1]=settings.used_features[2]=settings.used_features[3]=settings.used_features[4]=0;
    flora_ident.changeSettings(settings.used_features, settings.gist_params,
                               settings.clear_precomp_features);

    cout << "Settings:" << endl;
    cout << settings.learning_rate << endl;
    for(int i =0; i<FEATURES_NUM; i++)
      cout << settings.used_features[i] << endl;


    string folder_name = dir_name.substr(dir_name.rfind("/") + 1);
    if (folder_name == "Train" || folder_name == "train") {
        QDir curr_dir(dir_name.c_str());
        auto files = curr_dir.entryList(QDir::Files);

        bool has_train_fts = false;
        //if (files.contains("train_features.xml") && files.contains("svm_model")) {
        //    has_train_fts = true;
        //}
        return flora_ident.loadTrainSet(dir_name, has_train_fts);
    }



    return false;
}

void FloraIdentApp::loadQueryImg(const string& file_name)
{
    query_img = imread(file_name);
}

void FloraIdentApp::setSelectionRegion(int x, int y, int width, int height)
{
    flora_ident.setTestImg(query_img(Rect(x, y, width, height)));
}

void FloraIdentApp::setSelectionRegion(const QRect& rect)
{
    setSelectionRegion(rect.left(), rect.top(), rect.width(), rect.height());
}

void FloraIdentApp::extractFeatures(QTextEdit *qte)
{
    flora_ident.genTrainFeatures(qte);
    flora_ident.genTestFeatures(qte);

    flora_ident.getCandidates(candidates, cand_fns);
}

void FloraIdentApp::updateCandidates(const UserResponse& user_resp)
{
    flora_ident.updateCandidates(user_resp, settings.learning_rate);
    flora_ident.getCandidates(candidates, cand_fns);
}

void FloraIdentApp::getCandidates(array<QImage,  CANDIDATES_SIZE>& cands,
                                  array<QString, CANDIDATES_SIZE>& file_names)
{
    matToQImage(candidates.begin(), candidates.end(), cands.begin());

    if (!settings.display_file_name) return;

    // Save file name if this is enabled
    auto iter = file_names.begin();
    for (const auto& fn : cand_fns) {
      string q1 = fn.substr(0, fn.rfind("/"));
      string q2 = q1.substr(q1.rfind("/")+1);
      cout << fn << " " << q1 << " " << q2 << endl;
      *iter = (q2).c_str();
        ++iter;
    }
}


string FloraIdentApp::getResult()
{
    return flora_ident.getResult();
}

void FloraIdentApp::matToQImage(const Mat& src, QImage& dst)
{
    Mat rgb;
    cvtColor(src, rgb, CV_BGR2RGB);

    QImage tmp(rgb.data, rgb.cols, src.rows, rgb.step, QImage::Format_RGB888);
    dst = tmp.copy();
}
