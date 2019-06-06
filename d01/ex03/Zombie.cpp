/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:47:31 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:18 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) { return ; }
Zombie::~Zombie(void) { return ; }

std::string Zombie::getName(void)
{
  return (this->_name);
}
std::string Zombie::getType(void)
{
  return (this->_type);
}
void Zombie::announce(void)
{
	std::cout << "<" << (this->_name) << " (" << (this->_type) << ")> Braiiiiiiinnnssss..." << std::endl;
}
void Zombie::setName(std::string name)
{
  this->_name = name;
  return;
}
void Zombie::setType(std::string type)
{
  this->_type = type;
  return;
}
