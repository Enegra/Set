//
// Created by agnie on 12/21/2016.
//

#ifndef SET_DOG_H
#define SET_DOG_H

#include <iostream>

class Dog {
private:
    int size;
    int weight;
    std::string color;
    std::string name;
public:
    Dog(){};
    Dog(int size, std::string color, int weight, std::string name);
    int getSize();
    void setSize(int size);
    void setColor(std::string color);
    std::string getColor();
    int getWeight();
    void setWeight(int weight);
    void setName(std::string name);
    std::string getName();
    bool operator< (Dog &dog) const;
};


#endif //SET_DOG_H
