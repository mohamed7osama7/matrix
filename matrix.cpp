#include "matrix.h"
Matrix::Matrix(int r,int c,int **arr)
{
    row = r;
    col = c;

    data = new int* [row];
    for (int i=0 ; i< row ; i++)
        data[i] = new int [col];

    for (int i=0 ; i<row ; i++)
    {
        for (int j =0 ; j< col ; j++)
            data[i][j] = arr[i][j];
    }
}
Matrix::Matrix(){
}
istream& operator>> (istream& in , Matrix& mat)
{
    int r,c;
    cout << "Enter the number of rows and columns :";
    cin >> r >> c;

    int **data = new int*[r];
    for (int i=0 ; i<r ; i++)
        data[i] = new int[c];

    cout << "Enter the matrix data" << endl;
    for (int i=0 ; i<r ; i++)
    {
        for (int j=0 ; j<c ; j++)
            cin >> data[i][j];
    }
    mat = Matrix(r , c , data);
    return in;
}
ostream& operator<< (ostream& out , Matrix mat)
{
    for (int i=0 ; i<mat.row ; i++)
    {
        out << "|";
        for (int j=0 ; j<mat.col ; j++)
            out << " " << mat.data[i][j] << " ";
        out << "|" << endl;
    }
    return out;
}

Matrix Matrix::operator+ (Matrix m2)
{
    int **arr = new int*[row];
    for (int i=0 ; i<row ; i++)
        arr[i] = new int[col];

    for (int i=0 ; i< row ; i++)
    {
        for ( int j =0 ; j< col ; j++)
            arr[i][j] = data[i][j] + m2.data[i][j];
    }
    return Matrix(row,col,arr);
}

Matrix Matrix::operator- (Matrix m2)
{
    int **arr = new int*[row];
    for (int i=0 ; i<row ; i++)
        arr[i] = new int[col];

    for (int i=0 ; i< row ; i++)
    {
        for ( int j =0 ; j< col ; j++)
            arr[i][j] = data[i][j] - m2.data[i][j];
    }
    return Matrix(row,col,arr);
}
