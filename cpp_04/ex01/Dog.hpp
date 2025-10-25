/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:38:41 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/26 00:23:17 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public:

		Dog(void);
		Dog(std::string name);
		Dog(Dog const &other);
		virtual ~Dog(void);

		Dog&	operator= (Dog const &other);

		std::string		getName(void) const;
		void			setName(std::string name);

		virtual void 	makeSound(void) const;
	
	private:

		Brain*	brain;
};

#endif
