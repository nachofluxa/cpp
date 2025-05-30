/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:53:35 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/18 12:51:11 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( int argc, char **argv )
{
	Zombie *macrohorde;

	if ( argc != 2 )
		std::cout << "Too many args.\n";
	else
	{
		int i = std::stoi(argv[1]);
		macrohorde = zombieHorde(i, "Zombie ");
		for ( int x = 0; x < i; x++ )
			macrohorde[x].announce();
		delete [] macrohorde;
	}
	return (1);
}