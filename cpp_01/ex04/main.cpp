/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:41:07 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/28 17:51:56 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static std::string replace(std::string &line, const std::string &s1, const std::string &s2)
{
	std::string result;
	size_t pos = 0, found;

	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		result.append(line, pos, found - pos);
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(line, pos);

	return (result);
}


static int	open_file(std::string filename, std::string s1, std::string s2)
{
	std::string get_line;
	std::ifstream input_file(filename);
	if (!input_file)
	{
		std::cout << "Error: This file does not exit.\n";
		return (-1);
	}
	std::ofstream output_file(filename + ".replace");
	if (!output_file)
	{
		std::cout << "Error: This file cannot be created.\n";
		return (-1);
	}

	while(std::getline(input_file, get_line))
		output_file << replace(get_line, s1, s2) << std::endl;

	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "You must introduce 3 strings: <filename> <s1> <s2>.\n";
		return (0);
	}
	if (argv[1] && argv[2] && argv[3])
	{
		int if_works = open_file(argv[1], argv[2], argv[3]);
		if (if_works == -1) return (-1);
		else return (0);
	}

	return (0);
}