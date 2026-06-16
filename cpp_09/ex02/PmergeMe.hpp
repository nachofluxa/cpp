#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>

class PmergeMe{

	private:

		std::vector<int> _vector;
		std::deque<int> _deque;

		void parseInput(int argc, char **argv);

		void fordJohnsonVector(std::vector<int>& vec);
		void fordJohnsonDeque(std::deque<int>& deq);

		void insertVector(std::vector<int>& vec, int value);
		void insertDeque(std::deque<int>& deq, int value);


		void printVector(const std::vector<int>& vec);
		void printDeque(const std::deque<int>& deq);

	public:

		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		void execute(int argc, char **argv);

		bool isValidNumber(const std::string& str);
};

#endif