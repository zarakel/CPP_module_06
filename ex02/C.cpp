#include "C.hpp"

C::C( char c ) : _c( c )
{
	std::cout << "Constructor called" << std::endl; 
	this->_c = c;
	return ;
}
