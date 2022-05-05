#include "Base.hpp"


Base::Base( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Base::Base( char c ) : _c( c )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Base::Base( Base const & )
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Base::~Base( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Base & Base::operator=( Base const & cp )
{
	this->_c = cp._c;
	return (*this);
}

Base * Base::generate( void )
{
	Base * ptr;
	A a( 'a' );
	B b( 'b' );
	C c( 'c' );

	srand(time(NULL));
	if ( rand() / 3 >= 0 && rand() / 3 <= 3 )
		ptr->ptr = &a;
	else if ( rand() / 3 >= 4 && rand() / 3 <= 6 )
		ptr->ptr = &b;
	else if ( rand() / 3 >= 7 && rand() / 3 <= 10 )
		ptr->ptr = &c;
	return ( ptr );
}

void	Base::identify( Base * p )
{
	p->ptr = 0;
	return;
}

void	Base::identify( Base & p )
{
	p.ptr = 0;
	return;
}

void	Base::Get_Char( void )
{
	std::cout << this->_c << std::endl;
	return ;
}
