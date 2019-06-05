/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:04:51 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 15:05:14 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Should be Pony.class.cpp but they requested Pony.cpp
#include "Pony.hpp"

Pony::Pony(void) { return ; }
Pony::~Pony(void) { return ; }

std::string Pony::getName(void)
{
  return (this->_name);
}
std::string Pony::getAge(void)
{
  return (this->_age);
}
std::string Pony::getColour(void)
{
  return (this->_colour);
}
std::string Pony::getGender(void)
{
  return (this->_gender);
}
void Pony::setName(std::string name)
{
  this->_name = name;
  return;
}
void Pony::setAge(std::string age)
{
  this->_age = age;
  return;
}
void Pony::setColour(std::string colour)
{
  this->_colour = colour;
  return;
}
void Pony::setGender(std::string gender)
{
  this->_gender = gender;
  return;
}
