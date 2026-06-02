
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter{

	private :

		std::string _toConvert;

	public:

		ScalarConverter();
		ScalarConverter(const std::string parameter);
		ScalarConverter(const ScalarConverter &other);
		~ScalarConverter();

		static void	*convert();

};


#endif
