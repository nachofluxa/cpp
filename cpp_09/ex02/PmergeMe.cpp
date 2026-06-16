#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		_vector = other._vector;
		_deque = other._deque;
	}

	return *this;
}

PmergeMe::~PmergeMe() {}

bool PmergeMe::isValidNumber(const std::string& str)
{
	if (str.empty())
		return false;

	size_t i = 0;

	while (i < str.size())
	{
		if (str[i] < '0' || str[i] > '9')
			return false;

		i++;
	}
	return true;
}

void PmergeMe::parseInput(int argc, char **argv)
{
	int i = 1;

	while (i < argc)
	{
		std::string value(argv[i]);

		if (!isValidNumber(value))
			throw std::runtime_error("Error");

		long number = std::strtol(value.c_str(), NULL, 10);

		if (number <= 0)
			throw std::runtime_error("Error");

		_vector.push_back((int)number);
		_deque.push_back((int)number);

		i++;
	}
}

void PmergeMe::insertVector(std::vector<int>& vec, int value)
{
	std::vector<int>::iterator it = vec.begin();

	while (it != vec.end() && *it < value)
		it++;

	vec.insert(it, value);
}

void PmergeMe::insertDeque(std::deque<int>& deq, int value)
{
	std::deque<int>::iterator it = deq.begin();

	while (it != deq.end() && *it < value)
		it++;

	deq.insert(it, value);
}

void PmergeMe::fordJohnsonVector(std::vector<int>& vec)
{
	if (vec.size() <= 1)
		return;

	std::vector<int> main;
	std::vector<int> pending;

	size_t i = 0;
	while (i + 1 < vec.size())
	{
		if (vec[i] > vec[i + 1])
		{
			main.push_back(vec[i]);
			pending.push_back(vec[i + 1]);
		}
		else
		{
			main.push_back(vec[i + 1]);
			pending.push_back(vec[i]);
		}

		i += 2;
	}

	if (i < vec.size())
		pending.push_back(vec[i]);

	fordJohnsonVector(main);

	for (size_t j = 0; j < pending.size(); j++)
		insertVector(main, pending[j]);

	vec = main;
}

void PmergeMe::fordJohnsonDeque(std::deque<int>& deq)
{
	if (deq.size() <= 1)
		return;

	std::deque<int> main;
	std::deque<int> pending;

	size_t i = 0;

	while (i + 1 < deq.size())
	{
		if (deq[i] > deq[i + 1])
		{
			main.push_back(deq[i]);
			pending.push_back(deq[i + 1]);
		}
		else
		{
			main.push_back(deq[i + 1]);
			pending.push_back(deq[i]);
		}
		i += 2;
	}
	if (i < deq.size())
		pending.push_back(deq[i]);
	fordJohnsonDeque(main);
	for (size_t j = 0; j < pending.size(); j++)
		insertDeque(main, pending[j]);
	deq = main;
}

void PmergeMe::printVector(const std::vector<int>& vec)
{
	for (size_t i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];

		if (i + 1 < vec.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::printDeque(const std::deque<int>& deq)
{
	for (size_t i = 0; i < deq.size(); i++)
	{
		std::cout << deq[i];

		if (i + 1 < deq.size())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::execute(int argc, char **argv)
{
	parseInput(argc, argv);

	std::cout << "Before: ";
	printVector(_vector);

	clock_t start = clock();

	fordJohnsonVector(_vector);

	clock_t end = clock();

	double vectorTime =
		((double)(end - start) / CLOCKS_PER_SEC) * 1000000;

	start = clock();

	fordJohnsonDeque(_deque);

	end = clock();

	double dequeTime =
		((double)(end - start) / CLOCKS_PER_SEC) * 1000000;

	std::cout << "After: ";
	printVector(_vector);

	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : "
		<< std::fixed << std::setprecision(5) << vectorTime<< " us" << std::endl;

	std::cout << "Time to process a range of " << _deque.size() << " elements with std::vector : "
		<< std::fixed << std::setprecision(5) << dequeTime<< " us" << std::endl;
}