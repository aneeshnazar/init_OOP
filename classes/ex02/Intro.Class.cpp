#include "Intro.Class.hpp"

Intro::Intro(){}

Intro::Intro(Intro const &cc)
{
    *this = cc;
}

Intro::~Intro(){}

Intro &Intro::operator=(Intro const &input)
{
	message = input.message;
	return (*this);
}

std::string Intro::getMessage(void) const { return message;}

void Intro::setMessage(std::string _message){message = _message;}

/*
**  Your Code Here
*/
