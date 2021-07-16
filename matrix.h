#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>
using namespace std;

class Matrix {
private:
    int row;
    int col;
    int **data;
public:
    Matrix();
    Matrix(int r,int c,int **arr);

    friend istream& operator>> (istream& in , Matrix& mat);
    friend ostream& operator<< (ostream& out , Matrix mat);
    Matrix operator+ (Matrix m2);
    Matrix operator- (Matrix m2);
};




#endif // MATRIX_H_INCLUDED

/*
      input
      output
      addition
      subtraction
      multiplication
      inverse
      identical
      transpose
*/
