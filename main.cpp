#include <iostream>
#include "Set.h"
#include "Dog.h"


int main() {
    Set<int> set = Set<int>();
    int a = 5;
    int b = 4;

    set+a;
    std::cout<<set.get(0)<<std::endl;

    set+b;
    std::cout<<set.get(0)<<" " <<set.get(1)<<std::endl;

    int c = 11;
    set+c;
    std::cout<<set.get(0)<<" " <<set.get(1)<<" " <<set.get(2)<<std::endl;

    set.sort();
    std::cout<<set.get(0)<<" " <<set.get(1)<<" " <<set.get(2)<<std::endl;

    Set<int> set2 = Set<int>();
    int e = 8;
    int f = 2;
    set2+e;
    std::cout<<set2.get(0)<<std::endl;

    set2+f;
    std::cout<<set2.get(0)<<" " <<set2.get(1)<<std::endl;

    set+set2;
    std::cout<<set.get(0)<<" " <<set.get(1)<<" " <<set.get(2)<< " " << set.get(3) << " " << set.get(4) << std::endl;

    set.sort();
    std::cout<<set.get(0)<<" " <<set.get(1)<<" " <<set.get(2)<< " " << set.get(3) << " " << set.get(4) << std::endl;

    Dog cytra = Dog(35, "ginger", 14, "Cytra");
    Dog lutnia = Dog(39, "hare-pied", 18, "Lutnia");
    Dog reksio = Dog(37, "classic tricolor", 16, "Reksio");
    Set<Dog>dogSet = Set<Dog>();
    dogSet+lutnia;
    std::cout<<dogSet.get(0).getName()<<std::endl;

    dogSet+cytra;
    std::cout<<dogSet.get(0).getName()<<" " <<dogSet.get(1).getName()<<std::endl;

    dogSet+reksio;
    std::cout<<dogSet.get(0).getName()<<" " << dogSet.get(1).getName()<<" "<<dogSet.get(2).getName()<<std::endl;
    dogSet.sort();
    std::cout<<dogSet.get(0).getName()<<" " << dogSet.get(1).getName()<<" "<<dogSet.get(2).getName()<<std::endl;
    return 0;
}