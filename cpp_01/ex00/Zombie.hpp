/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:15:51 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/18 12:54:55 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string name); //constructor
		~Zombie(void); //destructor
	
		void	announce( void ) const;
		void	setName(std::string name);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif