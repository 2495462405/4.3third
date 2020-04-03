//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    

        Mat dstMat;
        Mat srcMat = imread("/Users/xuyishen/Desktop/sa jiganyouhaximeiyouga/2020.4.3/3/lena.jpg");
    if (srcMat.empty()) return -1;
    
    Point2f src_pt[]={
        Point2f(200,200),
        Point2f(250,200),
        Point2f(200,100),
    };
    Point2f dst_pt[]={
           Point2f(300,100),
           Point2f(300,50),
           Point2f(200,100),
       };
    const Mat affine_matrix = getAffineTransform(src_pt,dst_pt);
    warpAffine(srcMat,dstMat,affine_matrix,srcMat.size());
        imshow("src",srcMat);
        imshow("dst",dstMat);
        
        waitKey(0);
        
    
    }
