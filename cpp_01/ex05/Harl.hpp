/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:15:09 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/04 10:29:32 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
	public:
		Harl (void);
		~Harl (void);
		void	complain(std::string level);
};


#endif