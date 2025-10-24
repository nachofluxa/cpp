/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:05:32 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/10/24 13:09:54 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		~FragTrap(void);

		void	attack(std::string const &target);
		void	highFivesGuys(void);

		FragTrap& operator= (FragTrap const &other);

};



#endif