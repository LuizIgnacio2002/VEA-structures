#ifndef MATRIX_H
#define MATRIX_H

#include "IMatrix.h"
#include "Node.h"
#include<vector>

using namespace std;

template<typename T>
class Matrix : public IMatrix<T> {
private:
    int rows;
    int columns;
    vector<vector<Node<T>>> data;
public:
    Matrix(int rows, int columns) : rows(rows), columns(columns) {
        data = vector<vector<Node<T>>>(rows, vector<Node<T>>(columns));
    }

    void setValue(int row, int column, T value) override {
        data[row][column].setValue(value);
    }

    T getValue(int row, int column) override {
        return data[row][column].getValue();
    }
};

#endif // MATRIX_H