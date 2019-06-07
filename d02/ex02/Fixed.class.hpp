/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:25:41 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/07 14:18:13 by mwestvig         ###   ########.fr       */
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
	Fixed				&operator=(Fixed const &rhs);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat( void ) const;
	int					toInt( void ) const;
	bool				operator<(Fixed const &rhs) const;
	bool				operator>(Fixed const &rhs) const;
	bool				operator<=(Fixed const &rhs) const;
	bool				operator>=(Fixed const &rhs) const;
	bool				operator==(Fixed const &rhs) const;
	bool				operator!=(Fixed const &rhs) const;
	Fixed				operator+(Fixed const &rhs) const;
	Fixed				operator-(Fixed const &rhs) const;
	Fixed				operator*(Fixed const &rhs) const;
	Fixed				operator/(Fixed const &rhs) const;
	Fixed               &operator++(void);
    Fixed               &operator--(void);
    Fixed               operator++(int);
    Fixed               operator--(int);
	static Fixed        &min(Fixed &a, Fixed &b);
    const static Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
    const static Fixed  &max(const Fixed &a, const Fixed &b);
private:
	int	_fixedPointValue;
	static const int _fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixedValue);

#endif
