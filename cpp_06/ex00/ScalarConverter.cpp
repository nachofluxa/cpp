
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const std::string parameter) : _toConvert(parameter) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) : _toConvert(other._toConvert) {}

ScalarConverter::~ScalarConverter() {}

void	*ScalarConverter::convert()
{

}
