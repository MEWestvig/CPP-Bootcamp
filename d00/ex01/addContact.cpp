/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:14:05 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 11:29:08 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact	addContact() {
	Contact newContact;
	std::string buffer;

	std::cout << "Please enter the following contact info:" << std::endl;
	std::cout << "First Name:" << std::endl;
	std::cin >> buffer;
	newContact.setFirstName(buffer);
	std::cout << "Last Name:" << std::endl;
	std::cin >> buffer;
	newContact.setLastName(buffer);
	std::cout << "Nickname:" << std::endl;
	std::cin >> buffer;
	newContact.setNickname(buffer);
	std::cout << "Login:" << std::endl;
	std::cin >> buffer;
	newContact.setLogin(buffer);
	std::cout << "Postal Address:" << std::endl;
	std::cin >> buffer;
	newContact.setPostalAddress(buffer);
	std::cout << "Email Address:" << std::endl;
	std::cin >> buffer;
	newContact.setEmailAddress(buffer);
	std::cout << "Phone Number:" << std::endl;
	std::cin >> buffer;
	newContact.setPhoneNumber(buffer);
	std::cout << "Birthday Date:" << std::endl;
	std::cin >> buffer;
	newContact.setBirthday(buffer);
	std::cout << "Favourite Meal:" << std::endl;
	std::cin >> buffer;
	newContact.setFavouriteMeal(buffer);
	std::cout << "Underwear Colour:" << std::endl;
	std::cin >> buffer;
	newContact.setUnderwearColour(buffer);
	std::cout << "Darkest Secret:" << std::endl;
	std::cin >> buffer;
	newContact.setDarkestSecret(buffer);

	return (newContact);
}
