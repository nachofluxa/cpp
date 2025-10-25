/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:39:34 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/25 20:37:05 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CAT CLASS

Cat::Cat(void) : Animal("Cat"), brain(new Brain)
{
	std::cout << this->getName() << " default constructor called." << std::endl;
}

Cat::Cat(std::string name) : Animal(name), brain(new Brain)
{
	std::cout << this->getName() << " constructor called." << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other.getName()), brain(new Brain)
{
	std::cout << this->getName() << " copy constructor called." << std::endl;
	for (int i=0; i < 100; i++)
		brain->setIdea(i, other.brain->getIdea(i));	
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << this->getName() << " destructor called." << std::endl;
}

std::string		Cat::getName(void) const
{
	return this->type;
}

void	Cat::setName(std::string name)
{
	this->type = name;
}

void 	Cat::makeSound(void) const
{
	std::cout << "Meaw meaw!" << std::endl;
}

Cat&	Cat::operator=(Cat const &other)
{
	if (&other != this){
		delete this->brain;

		Brain*	newCatBrain = new Brain;
		for (int i=0; i < 100; i++)
			newCatBrain->setIdea( i, other.brain->getIdea(i) );
		this->type = other.getType();
		this->brain = newCatBrain;
	}
	return *this;
}
