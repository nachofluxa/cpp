/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:29:09 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/18 12:52:24 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << this->name;
	std::cout << " just died.\n";
}

Zombie::Zombie( std::string name )
{
	setName(name);
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce( void ) const
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}
