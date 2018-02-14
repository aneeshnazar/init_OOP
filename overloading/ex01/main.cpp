#include <iostream>
#include "HelloBot.Class.hpp"

int main(void)
{
    HelloBot h1 = HelloBot();
    HelloBot h2 = HelloBot("Chuckles");
    HelloBot h3 = HelloBot("Stan");

    h1.announce();
    h2.announce();
    h3.announce("I don't say hi.");
    return 0;
}
