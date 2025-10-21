/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:03:31 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/05/19 11:08:44 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string.h>

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string secret;
		std::string phone_number;

	public:
		void set_contact_info(int type, std::string info);
		std::string get_contact_info(int type);
};


#endif
