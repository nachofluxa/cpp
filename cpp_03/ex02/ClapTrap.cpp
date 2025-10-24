/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:52:34 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 13:57:30 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("Default CrapTrapp"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default unargumented constructor for ClapTrap " << this->getName() << " was called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->getName() << " default constructor called." << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &other ) : name(other.getName()), hitPoints(other.getHitPoints()), energyPoints(other.getEnergyPoints()), attackDamage(other.getAttackDamage())
{
	std::cout << "ClapTrap " << this->getName() << " copy construcutor was called." << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->getName() << " destructor called." << std::endl;
}

void	ClapTrap::attack( std::string const &target )
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
		std::cout << "ClapTrap " << this->getName() << " was attacked " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else if (this->getHitPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " could not attack because he had no hit points." << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << "ClapTrap " << this->getName() << " could not attack because he had no energy points." << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " took " << amount << " damage!" << std::endl;
	if (amount >= this->getHitPoints())
		this->setHitPoints(0);
	else
		this->setHitPoints( this->getHitPoints() - amount );
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " got repaired " << amount << " Hit Points!" << std::endl; 
		this->hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " cannot be repaired." << std::endl; 
}

std::string 	ClapTrap::getName( void ) const 
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints( void ) const
{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage( void ) const
{
	return (this->attackDamage);
}

void	ClapTrap::setName(std::string const &name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->attackDamage = attackDamage;
}

ClapTrap&	ClapTrap::operator= ( ClapTrap const &other )
{
	this->name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();

	return *this;
}

