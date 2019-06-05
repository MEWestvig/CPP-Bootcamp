/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:13:58 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 13:40:54 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void menu_text() {

	std::cout << ".______    __    __    ______   .__   __.  _______ .______     ______     ______    __  ___ "<< std::endl;
	std::cout << "|   _  \\  |  |  |  |  /  __  \\  |  \\ |  | |   ____||   _  \\   /  __  \\   /  __  \\  |  |/  / "<< std::endl;
	std::cout << "|  |_)  | |  |__|  | |  |  |  | |   \\|  | |  |__   |  |_)  | |  |  |  | |  |  |  | |  '  /  "<< std::endl;
	std::cout << "|   ___/  |   __   | |  |  |  | |  . `  | |   __|  |   _  <  |  |  |  | |  |  |  | |    <   "<< std::endl;
	std::cout << "|  |      |  |  |  | |  `--'  | |  |\\   | |  |____ |  |_)  | |  `--'  | |  `--'  | |  .  \\  "<< std::endl;
	std::cout << "| _|      |__|  |__|  \\______/  |__| \\__| |_______||______/   \\______/   \\______/  |__|\\__\\ "<< std::endl;
	std::cout << std::endl << "Your commands are as follows:" << std::endl;
	std::cout << "* ADD (Adds a new contact if there is space in your phonebook)" << std::endl;
	std::cout << "* SEARCH (Finds a contact at a specific index)" << std::endl;
	std::cout << "* EXIT (To exit the phonebook. WARNING: If you select this your contacts will be lost forever!)" << std::endl;
}

int main() {

	int             num_contacts;
	Contact         phonebook[MAX_CONTACTS];
	std::string     command;

	menu_text();
	num_contacts = 0;
	while (1)
	{
		std::cout << "Please enter a command:" << std::endl;
		std::cin >> command;
		for (int j = 0; j < (int)command.length(); j += 1)
		{
			command[j] = (char)toupper(command[j]);
		}
		if (command == "ADD")
		{
			if (num_contacts < MAX_CONTACTS)
			{
				phonebook[num_contacts] = addContact();
				num_contacts++;
				std::cout << std::endl << "Contact Saved!" << std::endl;
			}
			else
			{
				std::cout << "Phonebook has reached the max number of contacts.";
				std::cout << std::endl;
			}
		}
		else if (command == "SEARCH")
		{
			search(num_contacts, phonebook);
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Please enter a valid command!" << std::endl;
		}
	}
	return 0;
}
