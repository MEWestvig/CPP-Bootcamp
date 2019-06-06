/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:56:54 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:36:15 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {return;}
Human::~Human(void) {return;}

std::string Human::identify()
{
	return (this->_brain.identify());
}
Brain Human::getBrain()
{
	return (this->_brain);
}
