#include "ComplexNumber.Class.hpp"

ComplexNumber::ComplexNumber(){}

/*
** Your code here
*/

ComplexNumber::ComplexNumber(double _real, double _img)
{
    real = _real;
    imaginary = _img;
}

ComplexNumber::~ComplexNumber(){}

double  ComplexNumber::getReal(void) {return real; }

double  ComplexNumber::getIm(void) {return imaginary; }
