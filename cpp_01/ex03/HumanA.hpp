/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:21:53 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/18 13:16:33 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA{
	private:
		Weapon w;
		std::string n;

	public:
		HumanA	(std::string name, Weapon we);
		~HumanA	(void);
		void 	setName(std::string n);
		void	setWeapon(std::string w);
		std::string	getName(void)const;
		void	attack(void)const;	
};

#endif