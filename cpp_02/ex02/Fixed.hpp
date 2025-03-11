/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:28:48 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/11 13:55:01 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
		int					integer;
		static const int	fractional = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed(const int n);
		Fixed(const float n);
		Fixed	&operator=(const Fixed &other);
		~Fixed (void);
		float	toFloat(void) const;
		int	toInt(void) const;
		int	getRawBits(void)const;
		void	setRawBits(int const raw);

		//6 comparison operators: <, >, <=, >=, !=, ==
		bool	operator<(const Fixed &other) const;
		bool	operator>(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		//4 arithmetic operators: +, -, *, /
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		//4 increment/decrement operator: +, ++
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static Fixed &min(Fixed &f1, Fixed &f2);
		static const Fixed& min(Fixed const &f1, Fixed const &f2);
		static Fixed &max(Fixed &f1, Fixed &f2);
		static const Fixed& max(Fixed const &f1, Fixed const &f2);
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif