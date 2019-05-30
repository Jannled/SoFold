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

template<class T, int ROWS, int COLS>
class Matrix {
public:
	Matrix();
	Matrix(T[ROWS][COLS]);
	Matrix multiply(float, Matrix);
	Matrix multiply(Matrix, Matrix);
	Matrix(const Matrix& orig);
	virtual ~Matrix();
	
private:
	T** values;
};

#endif /* MATRIX_H */

