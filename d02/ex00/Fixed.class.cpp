/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:25:58 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/07 10:48:44 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed (void) : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}
Fixed::Fixed (Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
	{
		this->_fixedPointValue = rhs.getRawBits();
	}
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}
void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
	return;
}
