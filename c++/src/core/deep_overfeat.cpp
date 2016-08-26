#include <numeric>
#include <iostream>
#include <memory>
#include "core/deep_overfeat.h"
#include "overfeat.hpp"
#include "THTensor.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


using namespace std;
using namespace cv;
using namespace overfeat;
using namespace cls;


void DEEP::getFeature(const Mat& _src, vector<float>& result)
{
    int pid, fd[2];

    pipe(fd);

    pid = fork();
    if(pid != 0){
        result.resize(4096);
        read(fd[0],&result[0],sizeof(float)*result.size());

        int status;
        waitpid(pid, &status, 0);
    }
    else{
        overfeat::init("3rdparty/OverFeat/data/default/net_weight_0", 0);

        assert(!_src.empty());
        assert(_src.channels() == 3);
        
        Mat src(_src.clone());
        src.convertTo(src, CV_32FC1);
        resize(src, src, Size(231,231));
        

        // Compute deep descriptor
        THTensor *input = THTensor_(newWithSize3d)(3,231,231);
        for(int c = 0; c < 3; c++)
            for(int w = 0; w < 231; w++)
                for(int h = 0; h < 231; h++)
                     THTensor_(set3d)(input, c, w, h, src.at<cv::Vec3f>(w,h)[c]);

        assert(input->size[0] == 3);
        assert(input->size[1] == 231);
        assert(input->size[2] == 231);

        overfeat::fprop(input);

        THTensor* features = overfeat::get_output(19);
        
        float* data = THTensor_(data)(features);
        long sf = features->size[0],
             sy = features->size[1],
             sx = features->size[2];

        //result.resize(sf*sy*sx);   
        //for(int i = 0; i < sf*sy*sx; i++)
        write(fd[1], data, sf*sy*sx*sizeof(float));
            //result[i] = data[i];
                
        THTensor_(free)(input);
        _exit(0);

    }
    
}
