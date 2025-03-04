/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:15:09 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/04 09:41:43 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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