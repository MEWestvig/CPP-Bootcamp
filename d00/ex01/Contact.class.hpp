/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:46:26 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 11:53:41 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 8;
const int MAX_WIDTH = 10;

class Contact
{
public:
	Contact(void);
	~Contact(void);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getLogin(void);
	std::string	getPostalAddress(void);
	std::string	getEmailAddress(void);
	std::string	getPhoneNumber(void);
	std::string	getBirthday(void);
	std::string	getFavouriteMeal(void);
	std::string	getUnderwearColour(void);
	std::string	getDarkestSecret(void);
	void		setFirstName(std::string name);
	void		setLastName(std::string name);
	void		setNickname(std::string name);
	void		setLogin(std::string login);
	void		setPostalAddress(std::string address);
	void		setEmailAddress(std::string email);
	void		setPhoneNumber(std::string number);
	void		setBirthday(std::string birthday);
	void		setFavouriteMeal(std::string meal);
	void		setUnderwearColour(std::string colour);
	void		setDarkestSecret(std::string secret);

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthday;
	std::string	_favouriteMeal;
	std::string	_underwearColour;
	std::string	_darkestSecret;
};

Contact		addContact();

#endif
