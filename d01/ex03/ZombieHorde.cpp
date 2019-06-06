/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:47:42 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:22 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _number(n)
{
    this->_zombie = new Zombie[n];

    for (int i = 0; i < this->_number; i += 1)
    {
        this->_zombie[i].setType("Horde");
        this->_zombie[i].setName(this->randomName());
		this->_zombie[i].announce();
    }
    return ;
}

ZombieHorde::ZombieHorde(void)
{
    return ;
}

ZombieHorde::~ZombieHorde(void)
{
    return ;
}

std::string ZombieHorde::randomName(void)
{
	std::string str;

	 str = "aaaaaa";
	 srand(time(NULL) % rand() % rand());
	str[0] = rand() % 26 + 65;
	str[1] = rand() % 26 + 97;
	str[2] = rand() % 26 + 97;
	str[3] = rand() % 26 + 97;
	str[4] = rand() % 26 + 97;
	str[5] = rand() % 26 + 97;

    return (str);
}
