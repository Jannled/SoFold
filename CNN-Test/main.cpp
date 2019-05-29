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

#include <cstdlib>
#include <iostream>

#include "Math/Matrix.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
	double matA = {
		{1, 0, 0}, 
		{0, 1, 0}, 
		{0, 0, 1}};
	
	Matrix m1(matA);
	Matrix m2(matA);
	
	Matrix res = m1.multiply(m1, m2);
	
	return 0;
}

