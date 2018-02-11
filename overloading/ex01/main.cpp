#include "ComplexNumber.Class.hpp"
#include <iostream>

int main(void)
{
    ComplexNumber   c(1.0, 2.0);
    ComplexNumber   d(3.0, 1.0);
    ComplexNumber   e = c + d;

    std::cout << "C = " << c.getReal() << " + " << c.getIm() << "i" << std::endl;
    std::cout << "D = " << d.getReal() << " + " << d.getIm() << "i" << std::endl;
    std::cout << "C + D = " << e.getReal() << " + " << e.getIm() << "i" << std::endl;
    return 0;
}
