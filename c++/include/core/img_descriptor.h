#ifndef IMG_DESCRIPTOR_H
#define IMG_DESCRIPTOR_H

#include "common.h"
#include "gist.h"
#include "color_hist.h"
#include "fourier_hist.h"
#include "hough_hist.h"
#include "deep_overfeat.h"
#include <string>
#include <vector>
#include <QTextEdit>

_CLANY_BEGIN
constexpr int CANDIDATES_SIZE = 6;
constexpr int FEATURES_NUM = 6;
using UserResponse = array<int, CANDIDATES_SIZE>;

class ImageFile {
public:
    ImageFile() = default;
    explicit ImageFile(const string& file_name) : fn(file_name) {}

    operator cv::Mat() const { return cv::imread(fn); }
    operator string()  const { return fn; }

private:
    string fn;
};

class FeatureExtractor {
public:
    enum FeatureFlag { GIST_DESC = 1, LAPL_RGB = 2, HSV_HIST = 4,
                       FOURIER_HIST = 8, HOUGH_HIST = 16, DEEP_OVERFEAT = 32 };

    FeatureExtractor();

    FeatureExtractor(const FeatureExtractor&) = delete;
    FeatureExtractor& operator= (const FeatureExtractor&) = delete;

    void extract(const cv::Mat& samples, vector<cv::Mat>& ft_vec, QTextEdit *);
    void extract(const vector<ImageFile>& sample, vector<cv::Mat>& ft_vec, QTextEdit *);

    void setFeatures(const FeatureFlag& flag);

    void setGISTParams(const GISTParams& params);

    cv::Mat& getScaleFactors() { return scale_mat; }
    void setScaleFacotrs(const cv::Mat& scale_factors) { scale_mat = scale_factors; }

    vector<string> getFeatureNames();

private:
    vector<ImgFeature::Ptr> feature_extractors;
    int ft_flag;
    cv::Mat scale_mat;
};
_CLANY_END

#endif // IMG_DESCRIPTOR_H
