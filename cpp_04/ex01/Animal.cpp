/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:47 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/25 20:31:40 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//ANIMAL CLASS

Animal::Animal (void) : type("Unkown Animal")
{
	std::cout << this->getType() << " default constructor called." << std::endl;
}

Animal::Animal (std::string name) : type(name)
{
	std::cout << this->getType() << " constructor called." << std::endl;
}

Animal::Animal (Animal const &other) : type(other.getType())
{
	std::cout << this->getType() << " copy constructor called." << std::endl;
}

Animal::~Animal (void)
{
	std::cout << this->getType() << " destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << this->getType() << " makes an unkonwn noise." << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

void		Animal::setType(std::string type)
{
	this->type = type;
}

Animal& Animal::operator=(Animal const &other)
{
	this->setType(other.getType());
	return *this;
}
