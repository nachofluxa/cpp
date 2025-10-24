/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:57:16 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 13:16:13 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("Default ScavTrap")
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);

	std::cout << "ScavTrap " << this->getName() << " default unargumented constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);

	std::cout << "ScavTrap " << this->getName() << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &other ) : ClapTrap(other.getName())
{
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());

	std::cout << "ScavTrap " << this->getName() << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->getName() << " destructor called" << std::endl;
}

void	ScavTrap::attack( std::string const &target )
{
	std::cout << "ScavTrap " << this->getName() << " has attacked " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode!" << std::endl;
}

ScavTrap&	ScavTrap::operator= ( ScavTrap const &other )
{
	this->name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();

	return *this ;
}
