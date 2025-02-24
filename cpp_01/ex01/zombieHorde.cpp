/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:13:48 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/18 12:50:36 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie		*horde;
	std::string	set_name;
	int i = -1;

	horde = NULL;
	if (N > 0)
	{
		horde = new Zombie[N];
		while (++i < N)
		{
			set_name = name + std::to_string(i);
			horde[i].setName(set_name);
		}
	}
	else
	{
		horde = NULL;
		std::cout << "Your horde has no Zombies.\n";
	}
	return horde;
}
