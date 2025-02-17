/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:15:51 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/17 11:53:30 by ifluxa-c         ###   ########.fr       */
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
        Zombie(std::string name); //constructor
        ~Zombie( void ); //destructor
    
        void    announce( void ) const;
        void    setName(std::string name);
        
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif