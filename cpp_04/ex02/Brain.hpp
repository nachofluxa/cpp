/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:14:01 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/25 20:42:44 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

	public:

		Brain(void);
		Brain(Brain const &other );
		~Brain(void);

		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);

		Brain&	operator=(Brain const &other );

	protected:

		std::string	ideas[100];

};



#endif