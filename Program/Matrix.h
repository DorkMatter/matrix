/*
 * Matrix.h
 *
 *  Created on: 24/04/2014
 *      Author: Vixen
 */

#ifndef MATRIX_H_
#define MATRIX_H_
#include<iostream>;

using namespace std;

class Matrix
{
	public:
		Matrix(size_t dim);
		Matrix(Matrix &mat);

		virtual ~Matrix();

		Matrix& operator= (const Matrix &other);
		Matrix& operator<< (const Matrix &other);

		void add(Matrix mat);
		void multiply(Matrix mat);
		bool check_identity();
		void swap(Matrix mat);
		void invert();

	private:

};

#endif /* MATRIX_H_ */
