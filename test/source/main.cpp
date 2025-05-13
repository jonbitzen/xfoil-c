#include <iostream>

#include <xfoil/xfoil_lib.h>

int main(int argc, char* argv[]) {
    std::cout << "Hello XFoil-C" << std::endl;

    std::cout << "The answer: " << xfoil::add(40,2) << std::endl;

    return 0;
}