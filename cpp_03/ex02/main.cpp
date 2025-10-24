/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:51:47 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 13:21:14 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		FragTrap c;
		FragTrap d("Savage");

		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.highFivesGuys();
		c.highFivesGuys();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
	}
	return (0);
}
