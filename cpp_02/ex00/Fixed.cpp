/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:28:51 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/04 12:18:58 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <string>

Fixed::Fixed(void) : integer(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other): integer(other.integer)
{
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		integer = other.integer;
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called\n";
	return this->integer;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called\n";
	this->integer = raw;
}
