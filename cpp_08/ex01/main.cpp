
#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


int main()
{
	Span sp(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}


// 	std::cout << "\n===== BIG TEST (10000 numbers) =====" << std::endl;

// 	try
// 	{
// 		Span big(10000);

// 		for (int i = 0; i < 10000; i++)
// 			big.addNumber(i);

// 		std::cout << "Shortest span: " << big.shortestSpan() << std::endl;
// 		std::cout << "Longest span: " << big.longestSpan() << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}