/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:28:48 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/11 13:17:52 by nachofluxa       ###   ########.fr       */
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
		Fixed &operator=(const Fixed &other);
		~Fixed (void);
		float	toFloat(void) const;
		int	toInt(void) const;
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif