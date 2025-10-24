/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:57:03 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 12:53:34 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	public: 
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap(void);

		void		attack(std::string const &target);
		void		guardGate(void);

		ScavTrap&	operator= (ScavTrap const &other);
};

#endif