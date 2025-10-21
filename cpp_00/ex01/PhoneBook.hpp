/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:03:18 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/05/20 13:54:36 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook{
	private:
		Contact	list[MAX_CONTACTS];
		int		num_contacts;

	public:
		PhoneBook() : num_contacts(0) {};
		void start_phoneB(void);
		void add_contact(void);
		int search_contact(void);
};

#endif
