#include <iostream>
#include "../Matrix.h"
using namespace std;

int main() {
    double row1[5] = {
            1, 4, 5, 2, 6
    };
    double row2[5] = {
            5, 5, 5, 5, 5
    };
    double row3[5] = {
            6, 9, 4, 2, 0
    };
    double row4[5] = {
            1, 3, 3, 7, 0
    };
    double row5[5] = {
            0, 0, 0, 0, 0
    };
    double* arr[] = {
            row1, row2, row3, row4, row5
    };

    Matrix A(2, 5, arr);
    A.print();
    cout << endl;
    Matrix B = A.transpose();
    B.print();
    cout << endl;
    Matrix C = B;



    return 0;
}