/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:05:18 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/18 13:23:29 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): n(name){}

HumanB::~HumanB	(void){}

void 	HumanB::setName(std::string n)
{
	this->n = n;
}

void	HumanB::setWeapon(Weapon *w)
{
	this->w = w;
}

std::string	HumanB::getName(void)const
{
	return this->n;
}

void	HumanB::attack(void)const
{
	if (this->w)
		std::cout << this->n << " attacks with his " << this->w->getType() << std::endl;
	else
		std::cout << this->n << " has no weapon to attack with\n";
}
