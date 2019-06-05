/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:22:49 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 10:44:28 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) { return ; }
Contact::~Contact(void) { return ; }

std::string Contact::getFirstName(void)
{
  return (this->_firstName);
}
std::string Contact::getLastName(void)
{
  return (this->_lastName);
}
std::string Contact::getNickname(void)
{
  return (this->_nickname);
}
std::string Contact::getLogin(void)
{
  return (this->_login);
}
std::string Contact::getPostalAddress(void)
{
  return (this->_postalAddress);
}
std::string Contact::getEmailAddress(void)
{
  return (this->_emailAddress);
}
std::string Contact::getPhoneNumber(void)
{
  return (this->_phoneNumber);
}
std::string Contact::getBirthday(void)
{
  return (this->_birthday);
}
std::string Contact::getFavouriteMeal(void)
{
  return (this->_favouriteMeal);
}
std::string Contact::getUnderwearColour(void)
{
  return (this->_underwearColour);
}
std::string Contact::getDarkestSecret(void)
{
  return (this->_darkestSecret);
}

void Contact::setFirstName(std::string name)
{
  this->_firstName = name;
  return;
}
void Contact::setLastName(std::string name)
{
  this->_lastName = name;
  return;
}
void Contact::setNickname(std::string name)
{
  this->_nickname = name;
  return;
}
void Contact::setLogin(std::string login)
{
  this->_login = login;
  return;
}
void Contact::setPostalAddress(std::string address)
{
  this->_postalAddress = address;
  return;
}
void Contact::setEmailAddress(std::string email)
{
  this->_emailAddress = address;
  return;
}
void Contact::setPhoneNumber(std::string number)
{
  this->_phoneNumber = number;
  return;
}
void Contact::setBirthday(std::string birthday)
{
  this->_birthday = birthday;
  return;
}
void Contact::setFavouriteMeal(std::string meal)
{
  this->_favouriteMeal = meal;
  return;
}
void Contact::setUnderwearColour(std::string colour)
{
  this->_underwearColour = colour;
  return;
}
void Contact::setDarkestSecret(std::string secret)
{
  this->_darkestSecret = secret;
  return;
}
