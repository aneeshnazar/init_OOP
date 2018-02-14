#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber {
    private:
		double real;
		double imaginary;
	public:
        ComplexNumber ();
        ComplexNumber(double _real, double _img);
        ~ComplexNumber ();
        double  getReal(void);
        double  getIm(void);
        /*
        **  Your code here
        */
};

#endif
