/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:50:36 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 12:50:18 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLANTRAP_H
#define CLANTRAP_H

#include <string>
#include <iostream>

class ClapTrap{

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &other);
		~ClapTrap(void);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string 	getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

		void	setName(std::string const &name);
		void	setHitPoints(unsigned int hitPoints);
		void	setEnergyPoints(unsigned int energyPoints);
		void	setAttackDamage(unsigned int attackDamage);

		ClapTrap&	operator= (ClapTrap const &other);

	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};

#endif