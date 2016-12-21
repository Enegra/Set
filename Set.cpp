//
// Created by agnie on 12/21/2016.
//

#include "Set.h"

template <class T> Set<T>::get(int index) {
    return *elements.at(index);
}

template<class T> void Set::operator+(T &element) {
    elements.push_back(&element);
}

template<class T> void Set::operator+(Set &set) {
    elements.insert(elements.end(), set.elements.begin(), set.elements.end());
}

template <class T> void Set::sort() {

}

