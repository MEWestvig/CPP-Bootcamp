/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:04:14 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/07 10:48:40 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed &operator=(Fixed const &rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_fixedPointValue;
	static const int _fractionalBits = 8;
};

#endif
