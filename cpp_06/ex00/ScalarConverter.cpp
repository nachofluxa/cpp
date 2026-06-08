#include "ScalarConverter.hpp"

#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cctype>

static bool isPseudo(const std::string &s)
{
	return (s == "nan" || s == "+inf" || s == "-inf"
		|| s == "nanf" || s == "+inff" || s == "-inff");
}

static bool isChar(const std::string &s)
{
	if (s.length() == 3 && s[0] == '\'' && s[2] == '\'')
		return (true);
	if (s.length() == 1 && !std::isdigit(s[0]))
		return (true);
	return (false);
}

static void printChar(double value)
{
	if (value != value
		|| value < std::numeric_limits<char>::min()
		|| value > std::numeric_limits<char>::max())
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}

	char c = static_cast<char>(value);

	if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

static void printInt(double value)
{
	if (value != value || value < std::numeric_limits<int>::min()
		|| value > std::numeric_limits<int>::max())
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}

	std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void printFloat(double value)
{
	float f = static_cast<float>(value);

	std::cout << "float: ";

	if (f != f)
		std::cout << "nanf";
	else if (f == std::numeric_limits<float>::infinity())
		std::cout << "+inff";
	else if (f == -std::numeric_limits<float>::infinity())
		std::cout << "-inff";
	else
		std::cout << std::fixed << std::setprecision(1) << f << "f";

	std::cout << std::endl;
}

static void printDouble(double value)
{
	std::cout << "double: ";

	if (value != value)
		std::cout << "nan";
	else if (value == std::numeric_limits<double>::infinity())
		std::cout << "+inf";
	else if (value == -std::numeric_limits<double>::infinity())
		std::cout << "-inf";
	else
		std::cout << std::fixed << std::setprecision(1) << value;

	std::cout << std::endl;
}

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &literal)
{
	double	value;

	if (isPseudo(literal))
	{
		if (literal == "nan" || literal == "nanf")
			value = std::numeric_limits<double>::quiet_NaN();
		else if (literal == "+inf" || literal == "+inff")
			value = std::numeric_limits<double>::infinity();
		else
			value = -std::numeric_limits<double>::infinity();
	}
	else if (isChar(literal))
	{
		char c;

		if (literal.length() == 3)
			c = literal[1];
		else
			c = literal[0];

		value = static_cast<double>(c);
	}
	else
	{
		char *endptr;

		value = std::strtod(literal.c_str(), &endptr);

		if (*endptr == 'f' && *(endptr + 1) == '\0')
			++endptr;

		if (*endptr != '\0')
		{
			std::cout << "Invalid literal" << std::endl;
			return ;
		}
	}
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);
}