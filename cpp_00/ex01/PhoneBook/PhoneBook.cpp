/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachofluxa <nachofluxa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:38:07 by ifluxa-c          #+#    #+#             */
/*   Updated: 2025/02/05 13:48:35 by nachofluxa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

static void	display_contact(Contact cont, int index)
{
	cout << index << ". ";
	int i = 1;

	while (i < 4)
	{
		string to_write = cont.get_contact_info(i);

		if (to_write.length() <= 10)
			cout << setw(10) << to_write;
		else 
		{
			for (int j = 0; j < 9; ++j) cout << to_write[j];
			cout << ".";
		}
		cout << "|" ;
		i++;
    }
    cout << "\n";
}

int PhoneBook::search_contact(void)
{
	int	i;
	int	j;
	int	index;

	i = -1;
	if (this->num_contacts == 0)
	{
		cout << "\n**************************************\n";
		cout << "* There are no contatcs in the list. *\n";
		cout << "**************************************\n\n";
		return (1);
	}
	else
	{
		while (++i < this->num_contacts)
			display_contact(this->list[i], i + 1);
		cout << endl;
		cout << "Write the index of the contact you want to know all the information about.\nWrite a 0 if you have not found the contact you are looking for.\n";
		cin >> index;
		cin.ignore();
		if (index > num_contacts || index <= 0)
		{
			cout << "You entered an invalid number.\n";
			return (-1);
		}
		else
		{
			j = 0;
			cout << "\nHERE IS THE CONTACT INFORMATION YOU ASKED ABOUT:\n";
			while (++j < 6)
				cout << j << ". " << this->list[index - 1].get_contact_info(j) << "\n";
			cout << "\n";
			return (1);
		}
	}
}

static bool check_number(string number)
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
	string aux;

	if (num_contacts == 0)
		cout << "\nThere are 0 contacts on the list right now\n";
	else if (num_contacts == 1)
		cout << "\nThere is 1 contact on the list right now\n";
	else
		cout << "\nThere are " << num_contacts << " contacts on the list right now\n";
	cout << "LET'S GO ADD ANOTHER CONTACT TO YOUR PHONEBOOK!\n\nWrite the First Name: ";
	getline(cin, aux);
	contact.set_contact_info(1, aux);
	cout << "Write the Second Name: ";
	getline(cin, aux);
	contact.set_contact_info(2, aux);
	cout << "Write the Nickname: ";
	getline(cin, aux);
	contact.set_contact_info(3, aux);
	cout << "Write the Phone Number: ";
	getline(cin, aux);
	if (check_number(aux)) contact.set_contact_info(5, aux);
	else 
	{
		cout << "There is something wrong with the phone number, please try again.\nWrite the Phone Number: ";
		getline(cin, aux);
		if (check_number(aux)) contact.set_contact_info(5, aux);
		else 
		{
			cout << "There is again something wrong with the phone number.\n";
			exit(0);
		}
	}
	cout << "Write the Darkest Secret: ";
	getline(cin, aux);
	contact.set_contact_info(4, aux);
	system("clear");
	cout << "\n*****************************************\n";
	cout << "* Everything worked! PHONEBOOK UPDATED. *" << endl;
	cout << "*****************************************\n\n";
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
	string aux;

	cout << "Write which of these 3 options you would like to handle (ADD, SEARCH, EXIT)";
	cout << endl;
	getline(cin, aux);
	if (aux == "ADD")
		return  (1);
	else if (aux == "SEARCH")
		return (2);
	else if (aux == "EXIT")
		return (3);
	else
	{
		cout << "There is something wrong with the command you pick. Please try again.\n";
		return manage_options();
	}
}

void PhoneBook::start_phoneB(void)
{
	int	option;
	int	search;

	system("clear");
	cout << "************************************\n";
	cout << "* Let's start with your new agenda *\n";
	cout << "************************************\n";

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
