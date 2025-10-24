/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:05:35 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 13:56:41 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default FragTrap")
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);

	std::cout << "FragTrap " << this->getName() << " default unargumented constructor called" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);

	std::cout << "FragTrap " << this->getName() << " default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other.getName())
{
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());

	std::cout << "FragTrap " << this->getName() << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

void	FragTrap::attack( std::string const &target )
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
		std::cout << "FragTrap " << this->getName() << " was attacked " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	else if (this->getHitPoints() <= 0)
		std::cout << "FragTrap " << this->getName() << " could not attack because he had no hit points." << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << "FragTrap " << this->getName() << " could not attack because he had no energy points." << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->getName() << ": wants to high five with you." << std::endl;
}

FragTrap& FragTrap::operator= ( FragTrap const &other )
{
	this->name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();

	return *this;
}