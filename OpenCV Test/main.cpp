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

#include <iostream>

#include "opencv2/core.hpp"
#include "opencv2/opencv.hpp" 
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;

void edgeDetect(VideoCapture cap)
{
	Mat edges;cmake
	
	Mat frame;
	cap >> frame; // get a new frame from camera
	//cvtColor(frame, edges, COLOR_BGR2GRAY);
	//GaussianBlur(frame, frame, Size(7, 7), 1.5, 1.5);
	//Canny(edges, edges, 0, 30, 3);
	imshow("View", frame);
	//
}

void similarities(VideoCapture cap)
{
	Mat prevFrame, currentFrame;
	
	//Getting a frame from the video capture device.
	cap >> currentFrame;

	if (prevFrame.data) {
		//Finding the standard deviations of current and previous frame.
		Scalar prevStdDev, currentStdDev;
		meanStdDev(prevFrame, Scalar(), prevStdDev);
		meanStdDev(currentFrame, Scalar(), currentStdDev);

		cout << "Wert: " << currentStdDev << endl;
	}

	//To exit from the loop, if there is a keypress event.
	if (waitKey(30) >= 0) return;

	//For swapping the previous and current frame.
	swap(prevFrame, currentFrame);
}

int main(int argc, char** argv)
{
	//Print debug information
	printf("Launching programm with arguments: [");
	for (int i = 0; i < argc; i++)
		printf("%s%s", argv[i], (i < argc - 1) ? ", " : "]\n");

	VideoCapture cap(0); // open the default camera
	if (!cap.isOpened()) // check if we succeeded
		return -1;
	
	cout << "Camera backend: " << cap.getBackendName() << endl;
	
	edgeDetect(cap);
	
	for(;;){
		if (waitKey(30) >= 0) break;
	}

	// the camera will be deinitialized automatically in VideoCapture destructor
	return 0;
}