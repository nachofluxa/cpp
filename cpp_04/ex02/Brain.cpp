/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:14:04 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/25 20:27:53 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i=0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->ideas[index];

	std::cout << "Not a valid index." << std::endl;
	return "";
}
void	Brain::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "Not a valid index." << std::endl;
}

Brain&	Brain::operator=(Brain const &other )
{
	if (&other != this)
		for (int i=0; i < 100; i++)
			this->ideas[i] = other.getIdea(i);
	return *this;
}