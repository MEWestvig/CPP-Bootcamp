/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:48:22 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:42:00 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain {
public:
	Brain(void);
	~Brain(void);
	void		setAddress(void);
	std::string	getAddress(void);
	std::string	identify(void);
private:
	std::string _address;
};

#endif
