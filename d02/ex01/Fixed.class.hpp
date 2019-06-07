/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:25:41 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/07 13:29:55 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed(int const num);
	Fixed(float const num);
	Fixed		&operator=(Fixed const &rhs);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat( void ) const;
	int			toInt( void ) const;
private:
	int	_fixedPointValue;
	static const int _fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixedValue);

#endif
