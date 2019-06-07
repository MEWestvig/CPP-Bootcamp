/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:28:22 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/07 13:31:15 by mwestvig         ###   ########.fr       */
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
Fixed::Fixed (int const num)
{
	this->_fixedPointValue = num << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed (float const num)
{
	this->_fixedPointValue = roundf(num * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
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
std::ostream &operator<<(std::ostream &out, Fixed const &val)
{
	out << val.toFloat();
    return (out);
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
float Fixed::toFloat( void ) const
{
	return ((float)(this->_fixedPointValue) / (1 << _fractionalBits));
}
int	Fixed::toInt( void ) const
{
	return ((int)(this->_fixedPointValue >> _fractionalBits));
}
