/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:14:27 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/18 13:12:37 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string.h>

class Weapon{
		std::string type;

	public:
		Weapon	(std::string type);
		~Weapon	(void);
		void	setType(std::string t);
		std::string	getType(void) const;
};

#endif