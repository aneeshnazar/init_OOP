#include "HelloBot.Class.hpp"

HelloBot::HelloBot()
{
    name = "Nameless";
    message = "Hello World!";
}

/*
** Your code here
*/

void HelloBot::announce(void)
{
    std::cout << this->name << " says " << this->message << std::endl;
}

HelloBot::~HelloBot(){}
