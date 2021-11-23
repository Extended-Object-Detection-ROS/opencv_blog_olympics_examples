/*
 * Simple example of Extended Object Detection main functionality
 */

#include <stdio.h>
#include "SimpleObject.h"
#include "HsvColorDetector.h"
#include "DnnDetector.h"
#include "ExtractedInfoStringChecker.h"
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    printf("Simple Extended Object Detection Test!\n");
    
    // read image
    cv::Mat frame = cv::imread("../../images/two-cups-on-wooden-table_1373-290.jpg");      
    
    // define object
    eod::SimpleObject redCup("RedCup");
    
    // define its attributes    
    // dnn detector
    eod::DnnAttribute * dnna = new eod::DnnAttribute("tensorflow", 
                                                     "../../objectbase/ssd_mobilenet_v1_coco_2017_11_17/frozen_inference_graph.pb",
                                                     "../../objectbase/ssd_mobilenet_v1_coco_2017_11_17/config.pbtxt",
                                                     300, 300,
                                                     "../../objectbase/ssd_mobilenet_v1_coco_2017_11_17/mscoco_label_map.pbtxt", false);
    dnna->Name = "DNN";    
    
    // dnn label checker
    std::vector<std::string> allowed_classes;
    allowed_classes.push_back("cup");    
    eod::ExtractedInfoStringChecker * eisc = new eod::ExtractedInfoStringChecker("DNN:class_label", allowed_classes, false);
    eisc->Name = "Cup";
    
    // color detector
    eod::HsvColorAttribute * hca = new eod::HsvColorAttribute(0, 11, 100, 255, 10, 255);
    hca->Name = "Red";
    
    // add attributes to object
    redCup.AddModeAttribute(eod::DETECT, eod::RGB, dnna);
    redCup.AddModeAttribute(eod::CHECK, eod::RGB, eisc);
    redCup.AddModeAttribute(eod::DETECT, eod::RGB, hca);
    
    // identify!
    redCup.Identify(frame, cv::Mat(), 0);
    
    // draw results
    cv::Mat image2draw = frame.clone();    
    redCup.draw(image2draw, cv::Scalar(0,255,0));
    cv::imshow("result", image2draw);
    int k = 0;
    while(k != 27)
        k = cv::waitKey(1);
    
    return 0;
}
