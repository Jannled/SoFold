/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.h
 * Author: jannl
 *
 * Created on 29. Mai 2019, 13:58
 */

#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
	Matrix(int);
	Matrix(int, int);
	Matrix(float**);
	multiply(float, Matrix);
	multiply(Matrix, Matrix);
	Matrix(const Matrix& orig);
	virtual ~Matrix();
	
private:
	int rows, columns;
	float** values;
};

#endif /* MATRIX_H */

