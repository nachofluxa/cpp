/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:28:51 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/22 19:53:04 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : integer(0)
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &other): integer(other.integer)
{
	//std::cout << "Copy constructor called\n";
}
Fixed::Fixed(const int n)  : integer(n << Fixed::fractional)
{
	//std::cout << "Int constructor called\n";
}
Fixed::Fixed(const float n) : integer(roundf(n * (float)(1 << Fixed::fractional)))
{
	//std::cout << "Float constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called\n";
	if (this != &other)
		integer = other.integer;
	return *this;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called\n";
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits function called\n";
	return this->integer;
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits function called\n";
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

//6 comparison operators: <, >, <=, >=, !=, ==
bool	Fixed::operator<(const Fixed &other) const { return this->getRawBits() < other.getRawBits(); }

bool	Fixed::operator>(const Fixed &other) const { return this->getRawBits() > other.getRawBits(); }

bool	Fixed::operator<=(const Fixed &other) const { return this->getRawBits() <= other.getRawBits(); }

bool	Fixed::operator>=(const Fixed &other) const { return this->getRawBits() >= other.getRawBits(); }

bool	Fixed::operator!=(const Fixed &other) const { return this->getRawBits() != other.getRawBits(); }

bool	Fixed::operator==(const Fixed &other) const { return this->getRawBits() == other.getRawBits(); }

//4 arithmetic operators: +, -, *, /
Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed f;
	f.setRawBits(this->getRawBits() + other.getRawBits());
	return f;
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed f;
	f.setRawBits(this->getRawBits() - other.getRawBits());
	return f;
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed f;
	f.setRawBits((this->getRawBits() / other.getRawBits()) >> Fixed::fractional);
	return f;
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed f;
	f.setRawBits((this->getRawBits() * other.getRawBits()) >> Fixed::fractional);
	return f;
}
		
//4 increment/decrement operator: +, ++
Fixed	&Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return tmp;
}


Fixed	&Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return tmp;
}


Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{ 
	if (f1.getRawBits() <= f2.getRawBits())
		return f1;
	return f2;
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{ 
	if (f1.getRawBits() <= f2.getRawBits())
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return f1;
	return f2;
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() >= f2.getRawBits())
		return f1;
	return f2;
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}
