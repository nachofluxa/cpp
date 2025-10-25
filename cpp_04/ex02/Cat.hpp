/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:39:56 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/10/25 20:41:42 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

	public:

		Cat(void);
		Cat(std::string name);
		Cat(Cat const &other);
		virtual ~Cat(void);

		std::string		getName(void) const;
		void			setName(std::string name);

		virtual void 	makeSound(void) const;

		Cat&	operator=(Cat const &other);
	
	private:

		Brain*	brain;
};

#endif
