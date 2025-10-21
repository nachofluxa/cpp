/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:38:07 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/06/10 19:16:16 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

static void	display_contact(Contact cont, int index)
{
	std::cout << index << ". ";
	int i = 1;

	while (i < 4)
	{
		std::string to_write = cont.get_contact_info(i);

		if (to_write.length() <= 10)
			std::cout << std::setw(10) << to_write;
		else 
		{
			for (int j = 0; j < 9; ++j) std::cout << to_write[j];
			std::cout << ".";
		}
		std::cout << "|" ;
		i++;
    }
    std::cout << "\n";
}

static int strToInt(const std::string str)
{
	std::stringstream ss(str);
	int num;
	
	ss >> num;
	if (ss.fail() || !ss.eof())
		return -1;
	return num;
}

int PhoneBook::search_contact(void)
{
	int	i;
	int	j;
	int	index;
	std::string	to_atoi;

	i = -1;
	if (this->num_contacts == 0)
	{
		std::cout << "**************************************\n";
		std::cout << "* There are no contatcs in the list. *\n";
		std::cout << "**************************************\n\n";
		return (1);
	}
	else
	{
		std::cout << "*************\n";
		std::cout << "* PHONEBOOK *\n";
		std::cout << "*************\n\n";
		while (++i < this->num_contacts)
			display_contact(this->list[i], i + 1);
		std::cout << std::endl;
		std::cout << "Write the index of the contact you want to know all the information about.\nWrite a 0 if you have not found the contact you are looking for.\n";
		std::getline(std::cin, to_atoi);
		index = strToInt(to_atoi);
		if (index == -1 || index > num_contacts || index < 0)
		{
			system("clear");
			std::cout << "You entered something that it's not valid. Let's try again, here's the contact list:\n\n";
			return (search_contact());
		}
		else if (index == 0)
			return (1);
		else
		{
			j = 0;
			std::cout << "\nHERE IS THE CONTACT INFORMATION YOU ASKED ABOUT:\n";
			while (++j < 6)
				std::cout << j << ". " << this->list[index - 1].get_contact_info(j) << "\n";
			std::cout << "\n";
			return (1);
		}
	}
}

static bool check_number(std::string number)
{
	int i;
	bool ok;

	i = -1;
	ok = true;
	if ((int)number.length() != 9)
		return false;
	while (++i < (int)number.length() && ok)
		if (number[i] < '0' || number[i] > '9')
			ok = false;
	return ok;
}

static bool check_str(std::string str)
{
	int i;
	bool ok;

	i = 0;
	ok = true;
	if ((int)str.length() < 1)
		return (false);
	if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		return (false);
	while (i < (int)str.length() && ok)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') 
			|| str[i] == ' ' || str[i] == '-')
			i++;
		else
			ok = false;
	}
	return ok;
}

static Contact give_me_the_info(int num_contacts)
{
	Contact contact;
	std::string aux;

	(void)num_contacts;
	std::cout << "Write the First Name: ";
	std::getline(std::cin, aux);
	while (!check_str(aux))
	{
		std::cout << "There is something wrong with the first name, please try again.\nWrite the First Name: ";
		std::getline(std::cin, aux);
	}
	contact.set_contact_info(1, aux);

	std::cout << "Write the Second Name: ";
	std::getline(std::cin, aux);
	while (!check_str(aux))
	{
		std::cout << "There is something wrong with the second name, please try again.\nWrite the Second Name: ";
		std::getline(std::cin, aux);
	}
	contact.set_contact_info(2, aux);

	std::cout << "Write the Nickname: ";
	std::getline(std::cin, aux);
	contact.set_contact_info(3, aux);
	std::cout << "Write the Phone Number: ";
	std::getline(std::cin, aux);
	while (!check_number(aux))
	{
		std::cout << "There is something wrong with the phone number, please try again.\nWrite the Phone Number: ";
		std::getline(std::cin, aux);
	}
	contact.set_contact_info(5, aux);

	std::cout << "Write the Darkest Secret: ";
	std::getline(std::cin, aux);
	contact.set_contact_info(4, aux);
	system("clear");
	std::cout << "\n*****************************************\n";
	std::cout << "* Everything worked! PHONEBOOK UPDATED. *\n";
	std::cout << "*****************************************\n\n";
	return contact;
}

void PhoneBook::add_contact(void)
{
	std::string aux;
	
	system("clear");
	if (this->num_contacts == 1)
		std::cout << "\nThere is 1 contact on the list right now.\n";
	else
		std::cout << "\nThere are " << this->num_contacts << " contacts on the list right now.\n";
	std::cout << "You should know that you can add a maximum of " << MAX_CONTACTS << " contacts.\n";
	std::cout << "LET'S GET THE INFO OF THE NEW CONTACT.\n\n";
	if (this->num_contacts < MAX_CONTACTS)
	{
		this->list[num_contacts] = give_me_the_info(this->num_contacts);
		num_contacts++;
	}
	else if (this->num_contacts >= MAX_CONTACTS)
	{
		std::cout << "The contact you're about to add will delete the oldest contact you added to the list.";
		std::cout << " Do you still want to continue adding the new contact?(YES/NO)\n";
		std::getline(std::cin, aux);
		while (aux != "YES" && aux != "NO")
		{
			std::cout << "You wrote something wrong. Please type YES or NO.\n";
			std::getline(std::cin, aux);
		}
		if (aux == "YES")
		{
			for (int i = 0; i < MAX_CONTACTS - 1; ++i)
			this->list[i] = this->list[i + 1];
			this->list[MAX_CONTACTS - 1] = give_me_the_info(MAX_CONTACTS - 1);
		}
		else
			return ;
	}
}

static int	manage_options(void)
{
	std::string aux;

	std::cout << "Write which of these 3 options you would like to handle (ADD, SEARCH, EXIT)\n";
	std::getline(std::cin, aux);

	if (aux == "ADD")
		return  (1);
	else if (aux == "SEARCH")
		return (2);
	else if (aux == "EXIT")
		return (3);
	else
	{
		std::cout << "There is something wrong with the command you pick. Please try again.\n";
		return (manage_options());
	}
}

void PhoneBook::start_phoneB(void)
{
	int	option;
	int	search;

	system("clear");
	std::cout << "***************************************\n";
	std::cout << "* Let's start with your new phonebook *\n";
	std::cout << "***************************************\n";

	option = manage_options();
	while (1)
	{
		system("clear");
		if (option == 1)
			this->add_contact();
		else if(option == 2)
		{
			search = this->search_contact();
			if (search != 1)
				exit(0);
		}
		else if (option == 3)
			exit(0);
		else
			break ;
		option = manage_options();
	}
	return ;
}
