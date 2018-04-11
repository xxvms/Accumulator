#include <iostream>
#include <string>
#include "Accumulator.h"


int main() {

//    Accumulator<int> integers(0);
    Accumulator integers(0); // this is compatible with C++17

    integers += 3;
    integers += 7;
    std::cout << integers.GetTotal() << '\n';

//    Accumulator<std::string> strings("");
    Accumulator strings(std::string("")); // this is compatible with C++17

    strings += "hello";
    strings += " world";
    std::cout << strings.GetTotal() << '\n';

    //integers += "testing"; type safety will not allow me to do this.
    //strings += 4;


    return 0;
}