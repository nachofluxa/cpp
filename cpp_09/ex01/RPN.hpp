#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cstdlib>

class RPN
{
	private:

		std::stack<int> _stack;

		bool isOperator(std::string token);
		bool isNumber(std::string token);
		void calculate(std::string token);

	public:

		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		void execute(std::string expression);
};

#endif