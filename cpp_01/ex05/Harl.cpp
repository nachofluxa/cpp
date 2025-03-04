/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:15:11 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/03/04 09:45:26 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void){}

Harl::~Harl (void){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my " <<
		"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. " <<
		"You did not put enough bacon in my burger! If you did, I would not be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. " <<
		"I have been coming for years whereas you started working here since last month.\n\n"; 
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level)
{
	void (Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*funcs[i])();
			return;
		}
	}
	std::cout << "[ UNKNOWN ]\n";
	std::cout << "Invalid complaint level.\n";
}