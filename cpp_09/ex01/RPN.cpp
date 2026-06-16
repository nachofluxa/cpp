#include "RPN.hpp"


RPN::RPN() {}

RPN::RPN(const RPN& other) : _stack(other._stack) {}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		_stack = other._stack;

	return *this;
}

RPN::~RPN(){}

bool RPN::isOperator(std::string token)
{
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool RPN::isNumber(std::string token)
{
	if (token.size() != 1)
		return false;

	return (token[0] >= '0' && token[0] <= '9');
}

void RPN::calculate(std::string token)
{
	if (_stack.size() < 2)
		throw std::runtime_error("Error");

	int right = _stack.top();
	_stack.pop();

	int left = _stack.top();
	_stack.pop();

	if (token == "+")
		_stack.push(left + right);

	else if (token == "-")
		_stack.push(left - right);

	else if (token == "*")
		_stack.push(left * right);

	else if (token == "/")
	{
		if (right == 0)
			throw std::runtime_error("Error");

		_stack.push(left / right);
	}
}


void RPN::execute(std::string expression)
{
	std::stringstream ss(expression);
	std::string token;

	while (ss >> token)
	{
		if (isNumber(token))
			_stack.push(std::atoi(token.c_str()));
		else if (isOperator(token))
			calculate(token);
		else
			throw std::runtime_error("Error");
	}

	if (_stack.size() != 1)
		throw std::runtime_error("Error");

	std::cout << _stack.top() << std::endl;
}