#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){ loadDatabase(); }

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _database(other._database) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_database = other._database;

	return *this;
}

void BitcoinExchange::loadDatabase()
{
	std::ifstream file("data.csv");

	if (!file.is_open())
	{
		std::cerr << "Error: could not open database." << std::endl;
		return;
	}

	std::string line;

	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);

		std::string date;
		std::string value;


		std::getline(ss, date, ',');
		std::getline(ss, value);


		_database[date] = std::atof(value.c_str());
	}

	file.close();
}

bool BitcoinExchange::isValidDate(std::string date)
{
	if (date.size() != 10)
		return false;

	if (date[4] != '-' || date[7] != '-')
		return false;

	int year = std::atoi(date.substr(0,4).c_str());
	int month = std::atoi(date.substr(5,2).c_str());
	int day = std::atoi(date.substr(8,2).c_str());

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	return true;
}

bool BitcoinExchange::isValidValue(std::string value)
{
	double number = std::atof(value.c_str());

	if (number < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}

	if (number > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}

	return true;
}

void BitcoinExchange::exchange(std::string fileName)
{
	std::ifstream file(fileName.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}

	std::string line;

	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);

		std::string date;
		std::string value;

		std::getline(ss, date, '|');
		std::getline(ss, value);

		while (date.size() && date[date.size()-1] == ' ')
			date.erase(date.size()-1);

		while (value.size() && value[0] == ' ')
			value.erase(0,1);

		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}

		if (!isValidValue(value))
			continue;

		double amount = std::atof(value.c_str());

		std::map<std::string,double>::iterator it;

		it = _database.lower_bound(date);

		if (it == _database.end() || it->first != date)
		{
			if (it == _database.begin())
			{
				std::cerr << "Error: date too old." << std::endl;
				continue;
			}

			--it;
		}
		double result = amount * it->second;

		std::cout << date << " => " << amount << " = " << result << std::endl;
	}

	file.close();
}