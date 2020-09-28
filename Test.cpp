//
//  Test.cpp
//  HeartRateOnIOS
//
//  Created by zihan li on 9/23/20.
//  Copyright © 2020 zihan li. All rights reserved.
//


#include <opencv2/opencv.hpp>
#include <opencv2/face.hpp>
#include "Test.hpp"
#include <iostream>

#define HAAR_CLASSIFIER_PATH "haarcascade_frontalface_alt.xml"

using namespace std;
using namespace cv;

void Test::HelloFromCPP() {
    cout << "Hello World!" << endl;
}

void Test::capture_face() {
    int count = 1;
    
    // Load Face Detector (.xml file)
    CascadeClassifier detector;
    detector.load(HAAR_CLASSIFIER_PATH);
    
    // Load landmark
    Ptr<Facemark> facemark = FacemarkLBF::create();
    facemark->loadModel("lbfmodel.yaml");

    

}
