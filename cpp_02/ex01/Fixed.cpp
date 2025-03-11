/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:28:51 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/11 13:09:59 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : integer(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other): integer(other.integer)
{
	std::cout << "Copy constructor called\n";
}
Fixed::Fixed(const int n)  : integer(n << Fixed::fractional)
{
	std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float n) : integer(roundf(n * (float)(1 << Fixed::fractional)))
{
	std::cout << "Float constructor called\n";
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

float	Fixed::toFloat(void) const
{
	return (float)integer / (1 << Fixed::fractional);
}

int	Fixed::toInt(void) const
{
	return integer >> Fixed::fractional;
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}
