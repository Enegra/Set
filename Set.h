//
// Created by agnie on 12/21/2016.
//

#ifndef SET_SET_H
#define SET_SET_H


#include <vector>
#include <algorithm>

template <typename T> class Set {

private:
    std::vector<T*> elements;
public:
    T get(unsigned int index){
        return *elements.at(index);
    };

    void operator+(T &element){
        elements.push_back(&element);
    };

    void operator+(Set &set){
        elements.insert(elements.end(), set.elements.begin(), set.elements.end());
    };

    bool compare(T *a, T *b){
        return (*a < *b);
    }

    void sort(){
        std::sort(elements.begin(), elements.end(), compare);
    };

};

#endif //SET_SET_H
