#ifndef HELLOBOT_H
#define HELLOBOT_H

#include <iostream>

class HelloBot {
    private:
        std::string name;
		std::string message;
	public:
        HelloBot ();
        /*
        **  Your Code Here
        */
        ~HelloBot ();
        void announce(void);
};
#endif
