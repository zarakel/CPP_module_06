#include "Convert.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(int argc, char **argv)
{
	uintptr_t t;
	if (argc != 2)
		return 0;
	Convert a(argv[1]);
	a.convert_all();
	t = a.serialize(a.deserialize(100000000000000000));
	std::cout << t << std::endl;
	Base r;
	r.generate();
	r.Get_Char();
	return 0 ;
}
