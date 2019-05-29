/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.cpp
 * Author: jannl
 * 
 * Created on 29. Mai 2019, 13:58
 */

#include <stdexcept>

#include "Matrix.h"

int rows, columns;
float** values;

Matrix::Matrix(int dimension)
{
	
}

Matrix::Matrix(int rows, int columns)
{
	
}

Matrix::Matrix(const Matrix& orig)
{
	
}

Matrix::multiply(Matrix a, Matrix b)
{
	if(a.columns != b.rows) throw std::range_error;

	float mult[a.rows][b.columns];
	
	for (int i = 0; i < a.rows; i++) 
	{
		for (int j = 0; j < b.columns; j++) 
		{
			for (int k = 0; k < a.columns; k++) 
			{
				mult[i][j] += a.values[i][k] * b.values[k][j];
			}
		}
	}
	
	return Matrix(mult);
}

Matrix::multiply(float scalar, Matrix matrix)
{
	float result[matrix.rows][matrix.columns];
	for(int i=0; i<matrix.rows; i++)
		for(int j=0; j<matrix.columns; j++)
			values[i][j] = matrix[i][j] * scalar;
	
	return result;
}

Matrix::~Matrix()
{
}

