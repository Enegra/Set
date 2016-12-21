//
// Created by agnie on 12/21/2016.
//

#include "Set.h"

template <class Set::T> class T Set::get(int index) {
    return *elements.at(index);
}

template<class Set::T> void Set::operator+(T &element) {
    elements.push_back(&element);
}

void Set::operator+(Set &set) {
    elements.insert(elements.end(), set.elements.begin(), set.elements.end());
}

void Set::sort() {

}

