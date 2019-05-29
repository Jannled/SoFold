/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.cpp
 * Author: jannled
 *
 * Created on 24. Mai 2019, 11:44
 */

#include<opencv2/opencv.hpp>


main(int argc, char** argv)
{
    
}
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

