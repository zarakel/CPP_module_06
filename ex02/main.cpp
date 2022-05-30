#include "Convert.hpp"
#include "Base.hpp"
#include <unistd.h> 

int main()
{
	Base u;
	Base *b;
	Base *c;
	b = u.generate();
	usleep(500000);
	c = u.generate();
	u.identify(b);
	u.identify(*c);
	return 0 ;
}
