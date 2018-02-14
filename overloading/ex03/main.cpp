#include "ComplexNumber.Class.hpp"
#include <iostream>

int main(void)
{
    ComplexNumber   c(1.0, 2.0);
    ComplexNumber   d(3.0, 1.0);
    ComplexNumber   e = c + d;

    std::cout << "C = " << c << std::endl;
    std::cout << "D = " << d << std::endl;
    std::cout << "C + D = " << e << std::endl;
    return 0;
}
