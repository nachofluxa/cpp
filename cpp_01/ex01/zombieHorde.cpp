/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:13:48 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/17 12:41:02 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *horde;
    std::string  set_name;
    int i = -1;

    horde = NULL;
    if (N > 0)
    {
        horde = new Zombie[N];
		while (++i < N)
		{
			set_name = name + to_string( i );
			horde[i].setName(set_name);
		}
    }
    else
    {
        horde = NULL;
        cout << "Your horde has no Zombies.\n";
    }
    return horde;
}
