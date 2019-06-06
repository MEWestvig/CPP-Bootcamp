/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:11:37 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:40:27 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(void)
{
	setAddress();
	return;
}
Brain::~Brain(void) {return;}

void	Brain::setAddress(void)
{
    std::stringstream   buff;

    buff << this;
    this->_address = buff.str();
    return;
}
std::string	Brain::getAddress(void)
{
    return (this->_address);
}
std::string Brain::identify(void)
{
	return (this->getAddress());
}
