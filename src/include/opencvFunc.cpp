// opencvFunc.cpp
#include "opencvFunc.h"
#include <iostream>

cv::Mat computeImageDifference(const cv::Mat& img1, const cv::Mat& img2) {
    // Check if images have the same size and type
    if (img1.size() != img2.size() || img1.type() != img2.type()) {
        std::cerr << "Error: Images must have the same size and type" << std::endl;
        return cv::Mat();
    }

    // Compute the absolute difference between the two images
    cv::Mat diff;
    cv::absdiff(img1, img2, diff);

    return diff;
}
