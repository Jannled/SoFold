/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jannled
 *
 * Created on 12. Mai 2019, 14:06
 */
  
#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp" 
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

int main(int argc, char** argv)
{
    printf("Launching programm with arguments: [");
    for(int i=0; i<argc; i++)
        printf("%s%s", argv[i], (i < argc-1) ? ", ": "]\n");
	
	//cout << getBuildInformation() << endl;

    Mat src;
    
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;
    
    
    
    return 0;
}
