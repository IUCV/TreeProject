#ifndef DEEP_H
#define DEEP_H

#include "common.h"
#include "img_feature.h"

_CLANY_BEGIN


class DEEP : public ImgFeature {
public:
    string featureName(){return "Deep OverFeat";};
private:
    void getFeature(const cv::Mat& src, vector<float>& result) override;
    int  getDim() override { return 4096; };

};
_CLANY_END

#endif // DEEP_H
