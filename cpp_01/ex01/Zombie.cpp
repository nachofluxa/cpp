/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:29:09 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/17 12:37:40 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie( std::string name )
{
    setName(name);
}

Zombie::~Zombie( void )
{
    cout << this->name;
    cout << " just died.\n";
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce( void ) const
{
    cout << this->name;
    cout << ": BraiiiiiiinnnzzzZ...\n";
}
