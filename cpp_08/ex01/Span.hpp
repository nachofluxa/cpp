
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>


class Span{

	private:

		unsigned int		_maxSize;
		std::vector<int>	_vec;

	public:

		Span();
		Span(unsigned int _size);
		Span(const Span &other);
		Span &operator=(const Span &aux);
		~Span();

		void	addNumber(const int nbr);
		int		shortestSpan() const;
		int		longestSpan() const;

		class FullSpanException : public std::exception
		{
			public:
				const char* what() const throw() { return ("Span is full"); }
		};

		class NoSpanException : public std::exception
		{
			public:
				const char* what() const throw() { return ("Not enough numbers"); };
		};

};

#endif