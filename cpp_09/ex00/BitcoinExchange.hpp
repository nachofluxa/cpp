
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstdlib>

class BitcoinExchange
{
	private:

		std::map<std::string, double> _database;

		void loadDatabase();
		bool isValidDate(std::string date);
		bool isValidValue(std::string value);

	public:

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		void exchange(std::string file);
};

#endif