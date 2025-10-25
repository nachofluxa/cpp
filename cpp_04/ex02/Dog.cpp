/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:40:30 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/25 20:37:33 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain(new Brain)
{
	std::cout << this->getName() << " default constructor called." << std::endl;
}
Dog::Dog(std::string name) : Animal(name), brain(new Brain)
{
	std::cout << this->getName() << " constructor called." << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other.getName()), brain(new Brain)
{
	std::cout << this->getName() << " copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		brain->setIdea( i, other.brain->getIdea(i) );
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << this->getName() << " destructor called." << std::endl;
}

std::string		Dog::getName(void) const
{
	return this->type;
}

void	Dog::setName(std::string name)
{
	this->type = name;
}

void 	Dog::makeSound(void) const
{
	std::cout << "Woof Woof!" << std::endl;
}

Dog&	Dog::operator=(Dog const &other)
{
	if (&other != this)
	{
		delete this->brain;

		Brain*	newDogBrain = new Brain;
		for (int i=0; i < 100; i++)
			newDogBrain->setIdea( i, other.brain->getIdea(i) );
		this->type = other.getType();
		this->brain = newDogBrain;
	}
	return *this;
}