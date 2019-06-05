/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:13:58 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 11:49:53 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int main() {

	int             contact_index;
	Contact         phonebook[MAX_CONTACTS];
	std::string     command;

	contact_index = 0;
  while (1)
  {
    std::cin >> command;
    if (command == "ADD")
    {
		if (contact_index < MAX_CONTACTS)
		{
			phonebook[contact_index] = addContact();
			std::cout << "Contact Saved!" << std::endl;
		}
		else
		{
			std::cout << "Phonebook has reached the max number of contacts.";
			std::cout << std::endl;
		}
    }
    else if (command == "SEARCH")
    {

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
