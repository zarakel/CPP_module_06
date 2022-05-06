#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <stdexcept>

struct Data
{
	unsigned long truc;
	void * ptr;
};

class Convert
{
	public:
		Convert( void );
		Convert( char * val);
		Convert( Convert const & );
		~Convert( void );

		Convert & operator=( Convert const & cp);
		void convert_all( void );
		uintptr_t serialize( Data* ptr );
		Data * deserialize( uintptr_t raw );
		Data stru;

	private:
		char * _val;
		std::string _temp;

};	

#endif
