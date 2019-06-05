/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:46:26 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 11:24:29 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# def CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS 8;
const int MAX_WIDTH 10;

class Contact
{
public:
	Contact(void);
	~Contact(void);
	std::string	Contact::getFirstName(void);
	std::string	Contact::getLastName(void);
	std::string	Contact::getNickname(void);
	std::string	Contact::getLogin(void);
	std::string	Contact::getPostalAddress(void);
	std::string	Contact::getEmailAddress(void);
	std::string	Contact::getPhoneNumber(void);
	std::string	Contact::getBirthday(void);
	std::string	Contact::getFavouriteMeal(void);
	std::string	Contact::getUnderwearColour(void);
	std::string	Contact::getDarkestSecret(void);
	void		Contact::setFirstName(std::string name);
	void		Contact::setLastName(std::string name);
	void		Contact::setNickname(std::string name);
	void		Contact::setLogin(std::string login);
	void		Contact::setPostalAddress(std::string address);
	void		Contact::setEmailAddress(std::string email);
	void		Contact::setPhoneNumber(std::string number);
	void		Contact::setBirthday(std::string birthday);
	void		Contact::setFavouriteMeal(std::string meal);
	void		Contact::setUnderwearColour(std::string colour);
	void		Contact::setDarkestSecret(std::string secret);

private:
	std:string	_firstName;
	std:string	_lastName;
	std:string	_nickname;
	std:string	_login;
	std:string	_postalAddress;
	std:string	_emailAddress;
	std:string	_phoneNumber;
	std:string	_birthday;
	std:string	_favouriteMeal;
	std:string	_underwearColour;
	std:string	_darkestSecret;
}

Contact		addContact();
