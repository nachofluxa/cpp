/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:16:14 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/24 12:10:01 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): type(t){}

Weapon::~Weapon(void){}

void	Weapon::setType(std::string t)
{
	this->type = t;
}

const std::string	&Weapon::getType(void) const
{
	return this->type;
}
