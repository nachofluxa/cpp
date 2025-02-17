/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:03:18 by nachofluxa        #+#    #+#             */
/*   Updated: 2025/02/04 18:11:13 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include "../Contact/Contact.h"

#define MAX_CONTACTS 8

using namespace std;

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