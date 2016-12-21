//
// Created by agnie on 12/21/2016.
//

#ifndef SET_SET_H
#define SET_SET_H


#include <vector>

template <class T> class Set {

private:
    std::vector<T> elements;
public:
    T get(int index);

    void operator+(T &element);

    void operator+(Set &set);

    void sort();
};

#endif //SET_SET_H
