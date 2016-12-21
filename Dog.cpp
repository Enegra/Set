//
// Created by agnie on 12/21/2016.
//

#include "Dog.h"

int Dog::getSize() {
    return size;
}

void Dog::setSize(int size) {
    this->size = size;
}

void Dog::setColor(std::string color) {
    this->color = color;
}

std::string Dog::getColor() {
    return color;
}

int Dog::getWeight() {
    return weight;
}

void Dog::setWeight(int weight) {
    this->weight=weight;
}

void Dog::setName(std::string name) {
    this->name=name;
}

std::string Dog::getName() {
    return name;
}


Dog::Dog(int size, std::string color, int weight, std::string name) {
    this->size = size;
    this->color = color;
    this->weight = weight;
    this->name = name;
}

bool Dog::operator<(Dog &dog) const {
    return (weight < dog.weight);
}
