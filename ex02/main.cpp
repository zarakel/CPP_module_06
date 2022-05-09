#include "Convert.hpp"
#include "Base.hpp"

int main(int argc, char **argv)
{
	uintptr_t t;
	Convert a;
	if (argc == 2)
	{
		Convert b(argv[1]);
		b.convert_all();
		a = b;
	}
	t = a.serialize(a.deserialize(100000000000000000));
	std::cout << t << std::endl;
	Base u;
	Base *b;
	b = u.generate();
	u.identify(b);
	u.identify(*b);
	return 0 ;
}
