/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 19:27:52 by nachofluxa        #+#    #+#             */
/*   Updated: 2026/05/02 11:41:40 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("Juan", 42);
	std::cout << b1 << std::endl;

	b1.incrementGrade();
	std::cout << "Después de incrementar: " << b1 << std::endl;

	b1.decrementGrade();
	std::cout << "Después de reducir: " << b1 << std::endl;

	std::cout << "---------------------" << std::endl;

	try
	{
		Bureaucrat b2( "Pedro", 1);
		std::cout << b2 << std::endl;
		b2.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	try
	{
		Bureaucrat b3("Luis", 200);
	}
	catch (std::exception &e)
	{
		std::cout << "Error al crear: " << e.what() << std::endl;
	}

	return 0;
} 