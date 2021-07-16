#include <iostream>
#include "matrix.cpp"

using namespace std;

int main()
{
    Matrix m1,m2,m3;
    cin >> m1 >> m2;
    //cout << m1 << m2;
    cout << m1 + m2;
    cout<<endl;
    cout <<m1 - m2;
    return 0;
}
