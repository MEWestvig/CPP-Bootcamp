/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:23:04 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 13:46:08 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

bool isInteger(std::string s)
{
	if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

	char * p;
	strtol(s.c_str(), &p, 10);

	return (*p == 0);
}

void actual_search(Contact phonebook[MAX_CONTACTS], int i) {
	std::cout << "Here is the requested info: " << std::endl << std::endl;
	std::cout << "First Name: " << phonebook[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << phonebook[i].getLastName() << std::endl;
	std::cout << "Nickname: " << phonebook[i].getNickname() << std::endl;
	std::cout << "Login: " << phonebook[i].getLogin() << std::endl;
	std::cout << "Postal Address: " << phonebook[i].getPostalAddress() << std::endl;
	std::cout << "Email Address: " << phonebook[i].getEmailAddress() << std::endl;
	std::cout << "Phone Number: " << phonebook[i].getPhoneNumber() << std::endl;
	std::cout << "Birthday Date: " << phonebook[i].getBirthday() << std::endl;
	std::cout << "Favourite Meal: " << phonebook[i].getFavouriteMeal() << std::endl;
	std::cout << "Underwear Colour: " << phonebook[i].getUnderwearColour() << std::endl;
	std::cout << "Darkest Secret: " << phonebook[i].getDarkestSecret() << std::endl << std::endl;
}

static std::string		truncateContact(std::string field)
{
	field = field.erase((MAX_WIDTH - 1), \
	field.length() - (MAX_WIDTH - 1));
	field.append(".");
	return (field);
}

void start_output(int num_contacts, Contact phonebook[MAX_CONTACTS]) {
	std::string first_name;
	std::string last_name;
	std::string nickname;

	std::cout << "Welcome to the search!" << std::endl;
	std::cout << std::setw(MAX_WIDTH);
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < num_contacts; i++)
	{
		first_name = phonebook[i].getFirstName();
		last_name = phonebook[i].getLastName();
		nickname = phonebook[i].getNickname();
		std::cout << "|" << std::setw(MAX_WIDTH) << i;
		first_name = (first_name.length() > MAX_WIDTH) ? \
		truncateContact(first_name) : first_name;
		std::cout << "|" << std::setw(MAX_WIDTH) << first_name;

		last_name = (last_name.length() > MAX_WIDTH) ? \
		truncateContact(last_name) : last_name;
		std::cout << "|" << std::setw(MAX_WIDTH) << last_name;

		nickname = (nickname.length() > MAX_WIDTH) ? \
		truncateContact(nickname) : nickname;
		std::cout << "|" << std::setw(MAX_WIDTH) << nickname;
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter the index of the contact you want (Or enter EXIT or BACK to go to the previous menu):" << std::endl;
}

void search(int num_contacts, Contact phonebook[MAX_CONTACTS]) {
	std::string     command;

	start_output(num_contacts, phonebook);
	while (1)
	{
		std::cin >> command;
		for (int j = 0; j < (int)command.length(); j++)
		{
			command[j] = (char)toupper(command[j]);
		}
		if (command == "EXIT" || command == "BACK")
		{
			break;
		}
		else if (isInteger(command))
		{
			if((std::stoi(command) >= 0) && (std::stoi(command) < MAX_CONTACTS))
			{
				if (std::stoi(command) < num_contacts)
				{
					actual_search(phonebook, std::stoi(command));
				}
				else {
					std::cout << "You do not have a contact numbered: " << command << std::endl;
				}
			} else {
				std::cout << "Please input a valid index!" << std::endl;
			}
		}
		else
		std::cout << "Please input a valid index!" << std::endl;
	}
}
