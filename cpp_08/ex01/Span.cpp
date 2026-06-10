
#include "Span.hpp"

Span::Span() : _maxSize(0) {};

Span::Span(unsigned int size) : _maxSize(size) {};

Span::Span(const Span &other) : _maxSize(other._maxSize), _vec(other._vec) {}

Span &Span::operator=(const Span &aux)
{
	if (this != &aux)
	{
		_maxSize = aux._maxSize;
		_vec = aux._vec;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(const int nbr)
{
	if (_vec.size() >= _maxSize)
		throw FullSpanException();

	_vec.push_back(nbr);
}

int		Span::shortestSpan() const
{
	if (_vec.size() < 2)
		throw NoSpanException();

	std::vector<int> aux = _vec;

	std::sort(aux.begin(), aux.end());
	
	int	min = std::numeric_limits<int>::max();
	
	for (size_t i = 0; i + 1 < aux.size(); i++)
	{
		int diff = aux[i + 1] - aux[i];
		if (diff < min)
			min = diff;
	}

	return (min);
}

int		Span::longestSpan() const
{
	if (_vec.size() < 2)
		throw NoSpanException();

	int max = *std::max_element(_vec.begin(), _vec.end());
	int min = *std::min_element(_vec.begin(), _vec.end());;

	return (max - min);
}
