/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:36:03 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/24 12:03:45 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &we): w(we), n(name){}

HumanA::~HumanA	(void){}

void 	HumanA::setName(std::string n)
{
	this->n = n;
}

void	HumanA::setWeapon(std::string w)
{
	this->w = w;
}

std::string	HumanA::getName(void)const
{
	return this->n;
}

void	HumanA::attack(void)const
{
	std::cout << this->n << " attacks with his " << this->w.getType() << std::endl;
}
