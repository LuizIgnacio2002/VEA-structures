#ifndef IMATRIX_H
#define IMATRIX_H

template<typename T>
class IMatrix {
public:
    virtual void setValue(int row, int column, T value) = 0;
    virtual T getValue(int row, int column) = 0;
};

#endif // IMATRIX_H