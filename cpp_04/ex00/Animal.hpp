/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:39:18 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/24 16:46:55 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{

	public :
		void	makeSound(std::string type);


	protected :
		std::string type;

};




#endif
