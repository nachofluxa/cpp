/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:38:07 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/18 13:01:20 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

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

int PhoneBook::search_contact(void)
{
	int	i;
	int	j;
	int	index;

	i = -1;
	if (this->num_contacts == 0)
	{
		std::cout << "\n**************************************\n";
		std::cout << "* There are no contatcs in the list. *\n";
		std::cout << "**************************************\n\n";
		return (1);
	}
	else
	{
		while (++i < this->num_contacts)
			display_contact(this->list[i], i + 1);
		std::cout << std::endl;
		std::cout << "Write the index of the contact you want to know all the information about.\nWrite a 0 if you have not found the contact you are looking for.\n";
		std::cin >> index;
		std::cin.ignore();
		if (index > num_contacts || index <= 0)
		{
			std::cout << "You entered an invalid number.\n";
			return (-1);
		}
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
	while (++i < (int)number.length() && ok)
		if (number[i] < '0' || number[i] > '9')
			ok = false;
	return ok;
}

static Contact give_me_the_info(int num_contacts)
{
	Contact contact;
	std::string aux;

	if (num_contacts == 0)
		std::cout << "\nThere are 0 contacts on the list right now\n";
	else if (num_contacts == 1)
		std::cout << "\nThere is 1 contact on the list right now\n";
	else
		std::cout << "\nThere are " << num_contacts << " contacts on the list right now\n";
	std::cout << "LET'S GO ADD ANOTHER CONTACT TO YOUR PHONEBOOK!\n\nWrite the First Name: ";
	std::getline(std::cin, aux);
	contact.set_contact_info(1, aux);
	std::cout << "Write the Second Name: ";
	std::getline(std::cin, aux);
	contact.set_contact_info(2, aux);
	std::cout << "Write the Nickname: ";
	std::getline(std::cin, aux);
	contact.set_contact_info(3, aux);
	std::cout << "Write the Phone Number: ";
	std::getline(std::cin, aux);
	if (check_number(aux)) contact.set_contact_info(5, aux);
	else 
	{
		std::cout << "There is something wrong with the phone number, please try again.\nWrite the Phone Number: ";
		std::getline(std::cin, aux);
		if (check_number(aux)) contact.set_contact_info(5, aux);
		else 
		{
			std::cout << "There is again something wrong with the phone number.\n";
			exit(0);
		}
	}
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
	if (this->num_contacts < MAX_CONTACTS)
	{
		this->list[num_contacts] = give_me_the_info(this->num_contacts);
		num_contacts++;
	}
	else if (this->num_contacts >= MAX_CONTACTS)
	{
		for (int i = 0; i < MAX_CONTACTS - 1; ++i)
			this->list[i] = this->list[i + 1];
	this->list[MAX_CONTACTS - 1] = give_me_the_info(MAX_CONTACTS - 1);
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
		return manage_options();
	}
}

void PhoneBook::start_phoneB(void)
{
	int	option;
	int	search;

	system("clear");
	std::cout << "************************************\n";
	std::cout << "* Let's start with your new agenda *\n";
	std::cout << "************************************\n";

	option = manage_options();
	while (1)
	{
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
