#include<iostream>
#include "Matrix.h"
#include "Node.h"


int main(){
    // Matrix 2D with values T
    Matrix<double> matrix(3, 3);
    matrix.setValue(0, 0, 1.0);
    matrix.setValue(0, 1, 2.0);

    std::cout << matrix.getValue(0, 0) << std::endl;
    std::cout << matrix.getValue(0, 1) << std::endl;
    std::cout << matrix.getValue(0, 2) << std::endl;



    return 0;
}