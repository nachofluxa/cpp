/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:16:14 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/18 13:12:42 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): type(t){}

Weapon::~Weapon(void){}

void	Weapon::setType(std::string t)
{
	this->type = t;
}

std::string	Weapon::getType(void) const
{
	return this->type;
}
