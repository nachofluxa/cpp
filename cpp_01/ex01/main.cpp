/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:53:35 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/17 12:50:44 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

int main( int argc, char **argv )
{

	Zombie *macrohorde;

	if ( argc != 2 )
		cout << "Too many args.\n";
	else
	{
		int i = stoi(argv[1]);
		macrohorde = zombieHorde(i, "Zombie ");
		for ( int x = 0; x < i; x++ )
			macrohorde[x].announce();
		delete [] macrohorde;
	}
	return (1);
}