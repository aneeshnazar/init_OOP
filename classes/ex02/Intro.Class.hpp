#ifndef INTRO_H
#define INTRO_H

#include <iostream>

class Intro {
    private:
		std::string message;
	public:
        Intro ();
        Intro (Intro const &cc);
        ~Intro ();
        Intro &operator=(Intro const &input);

		std::string getMessage(void) const;
		void setMessage(std::string _message);
        void announce(void);
};
#endif
