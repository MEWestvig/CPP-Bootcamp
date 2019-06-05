/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:13:58 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 11:13:14 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int main(int argc, char const *argv[]) {

	int             contact_index;
	Contact         phonebook[MAX_CONTACTS];
	std::string     command;

  while (1)
  {
    command = "";
    std::cin >> command;
    if (command == "ADD")
    {
		if (contact_index < MAX_CONTACTS)
		{
			phonebook[contact_index] = addContact();
		}
		else
		{
			std::cout << "Phonebook has reached the max number of contacts."
			std::cout << std::endl;
		}
    }
    else if (command == "SEARCH")
    {

    }
    else if (command = "EXIT")
    {
      break;
    }
  }
  return 0;
}
