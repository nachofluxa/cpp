/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:53:35 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/17 12:15:16 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{

	Zombie aux("nacho");
	aux.announce();

	Zombie *lol = new Zombie("pedro");
	lol->announce();
	delete lol;
	
	randomChump("peter");

	Zombie *axixixix = newZombie("alvaro");
	axixixix->announce();
	delete axixixix;
}