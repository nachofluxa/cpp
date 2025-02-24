/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:04:32 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/18 13:17:32 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *w;
		std::string n;

	public:
		HumanB	(std::string name);
		~HumanB	(void);
		void 	setName(std::string n);
		void	setWeapon(Weapon *w);
		std::string	getName(void)const;
		void	attack(void)const;	
};

#endif