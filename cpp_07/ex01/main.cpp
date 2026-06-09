#include <iostream>
#include "iter.hpp"

// función normal
void printInt(int &x) { std::cout << x << " "; }

void printIntConst(int const &x) { std::cout << x << " "; }

template <typename T>
void print(T const &x) { std::cout << x << " "; }

void increment(int &x) { x++; }

int main()
{
	const int carr[] = {11, 22, 33, 44, 55};
	int arr[] = {1, 2, 3, 4, 5};

	std::cout << "Original: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	iter(arr, 5, increment);
	std::cout << "Incremented: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	std::cout << "Const print: ";
	iter(carr, 5, printIntConst);
	std::cout << std::endl;

	//-> Check array const
	// iter(carr, 5, increment);
	// std::cout << "Incremented: ";
	// iter(carr, 5, print<int>);
	// std::cout << std::endl;

	std::cout << "Template print: ";
	iter(arr, 5, print<int>);
	std::cout << std::endl;

	std::string str[] = {"hola", "mundo", "42"};

	std::cout << "Strings: ";
	iter(str, 3, print<std::string>);
	std::cout << std::endl;

	return 0;
}