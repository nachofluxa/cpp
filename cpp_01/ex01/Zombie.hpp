/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:15:51 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/17 12:36:36 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

using namespace std;

class Zombie {
    private:
        string name;
    
    public:
        Zombie();
        Zombie(std::string name); //constructor por nombre
        ~Zombie( void ); //destructor
    
        void    announce( void ) const;
        void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif