/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jannl
 *
 * Created on 29. Mai 2019, 07:52
 */

#include <iostream>

#include "Math/Matrix.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
	float matA[3][3] = {
		{1, 0, 0}, 
		{0, 1, 0}, 
		{0, 0, 1}};
	
	Matrix<float, 3, 3> m1(matA);
	Matrix<float, 3, 3> m2(matA);
	
	//Matrix<float, 3, 3> res = m1.multiply(m1, m2);
	
	return 0;
}

