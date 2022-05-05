#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <string>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

/*class A;

class B;

class C;*/

class Base
{
	public:

	Base( void );
	Base( char c );
	Base( Base const & );
	virtual ~Base( void );

	Base & operator= (Base const & cp );

	Base *	generate ( void );
	void	identify( Base * p );
	void	identify( Base & p );
	void	Get_Char( void );

	private:
	
	char _c;
	void * ptr;
};

#endif
