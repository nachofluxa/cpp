/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:52:40 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/18 12:47:02 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "\nMA String: " << &brain << std::endl;
	std::cout << "MA StringPTR: " << stringPTR << std::endl;
	std::cout << "MA StringREF: " << &stringREF << std::endl;
	std::cout << "\nVALUE String: " << brain << std::endl;
	std::cout << "VALUE StringPTR: " << *stringPTR << std::endl;
	std::cout << "VALUE StringREF: " << stringREF << std::endl << std::endl;

	return (1);
}