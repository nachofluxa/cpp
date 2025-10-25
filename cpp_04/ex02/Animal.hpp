/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:39:18 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/26 00:41:07 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

	public :
		Animal(void);
		Animal(std::string name);
		Animal(Animal const &other);
		virtual ~Animal(void);
		
		virtual void	makeSound(void) const = 0;

		std::string	getType(void) const;
		void		setType(std::string type);

		Animal& operator=(Animal const &other);
		
	protected :
		std::string type;
};

#endif