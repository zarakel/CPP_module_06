#include <stdlib.h>
#include <limits>
#include "Convert.hpp"

Convert::Convert( void )
{
	std::cout << "Constructor called" << std::endl;
	return;
}
Convert::Convert( char * val ) : _val(val),  _temp(_val)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Convert::Convert( Convert const & )
{
	return ;
}

Convert & Convert::operator=( Convert const & cp )
{
	this->_val = cp._val; 
	return *this;
}

void Convert::convert_all( void )
{
	if (_temp == "nan" || _temp == "-inf" || _temp == "+inf" || _temp == "+inff" || _temp == "-inff" || _temp == "nanf")
	{
		std::cout << "char = impossible"<<  std::endl;	
		std::cout << "int  = impossible"<<  std::endl;
		if (_temp == "nan" || _temp == "nanf")
		{	
			std::cout << "float = nanf"<<  std::endl;	
			std::cout << "double = nan"<<  std::endl;	
		} 	
		else if (_temp == "-inf" || _temp == "-inff")
		{
			std::cout << "float = -inff"<<  std::endl;	
			std::cout << "double = -inf"<<  std::endl;
		}
		else if (_temp == "+inf" || _temp == "+inff")
		{
			std::cout << "float = +inff"<<  std::endl;	
			std::cout << "double = +inf"<<  std::endl;
		}
	}	
	double d;
	if ( strlen(_val) == 1 )
		d = _val[0] - 48;
	else if ( strlen(_val) == 3 && _val[0] == 39 && _val[2] == 39 )
		d = _val[1];
	else
		d = atof(_val);
	float c;
	c = static_cast<float>(d);
	int b;
	b = static_cast<int>(d);
	int i;	
	i = 0;
	std::cout << d << std::endl;
	/*std::cout << "strlen: " << strlen(_val) << std::endl;
	while (_val[i])
	{
		std::cout << _val[i] << " && " << i << std::endl;
		i++;
	}
	std::cout << "val = " << this->_val << std::endl;*/
	// gérer les overflow ? 	
	if (c == b)
	std::cout << "float: " << c << ".0f" <<  std::endl;
	else 
	std::cout << "float: " << c << "f" <<  std::endl;
	std::cout << "double: " << d <<  std::endl;
	if ( b > 32 && b < 127 )
		std::cout << "char: '" << static_cast<char>(b) << "'" <<  std::endl;
	else if (( b >= 0 && b <= 32) || b == 127)
		std::cout << "non diplayable" << std::endl;
	else if (b < 0 || b > 127)
		std::cout << "impossible" << std::endl;
}

uintptr_t Convert::serialize( Data * ptr )
{
	std::cout << ptr->ptr << std::endl;
	uintptr_t u = (uintptr_t)ptr->ptr;
	return (u);
}

Data * Convert::deserialize( uintptr_t raw )
{
	stru.ptr = (void *)raw;
	return (&stru);
}

Convert::~Convert( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}
