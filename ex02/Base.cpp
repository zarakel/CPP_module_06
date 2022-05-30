#include "Base.hpp"

Base::~Base(void)
{
	std::cout << "Constructed call" << std::endl;
	return ;
}

Base * Base::generate(void)
{
	srand(time(NULL));
	if (rand() % 3 == 1)
			return (new A());
	else if (rand() % 3 == 2)
			return (new B());
	else
			return (new C());
}

void Base::identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	std::cout << "Pointer Called" << std::endl;
}

void Base::identify(Base &p)
{
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {
		try {
			(void) dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e) {
			try {
				(void) dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception &e) { }
		}
	}
	std::cout << "Ref Called" << std::endl;
}

