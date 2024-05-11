#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
    T value;
    int row;
    int column;

public:

    Node () {
        this->row = 0;
        this->column = 0;
    }

    Node (int row, int column) {
        this->row = row;
        this->column = column;
    }

    Node (int row, int column, T value) {
        this->row = row;
        this->column = column;
        this->value = value;
    }

    void setValue(T value) {
        this->value = value;
    }

    T getValue() {
        return value;
    }

};

#endif  // NODE_H