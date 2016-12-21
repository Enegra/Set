#include <iostream>
#include "Set.h"

int main() {
    Set<std::string> set = Set<std::string>();
    std::string a = "Ala";
    set+a;
//    std::cout<<set.get(0)<<std::endl;
    return 0;
}