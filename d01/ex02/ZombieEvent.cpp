/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:45:11 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:51:33 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    return ;
}

ZombieEvent::~ZombieEvent(void)
{
    return ;
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
    return ;
}

std::string ZombieEvent::getZombieType(void)
{
	return (this->_type);
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie  *zombie = new Zombie();
	zombie->setName(name);
	zombie->setType(_type);
    return (zombie);
}

Zombie *ZombieEvent::randomChump(void)
{
    Zombie  *zombie;
	std::string str;

    if (this->_type == "")
        this->setZombieType("undead");
	 str = "AAAAAA";
	 srand(time(0) % rand());
	str[0] = rand() % 26 + 65;
	str[1] = rand() % 26 + 65;
	str[2] = rand() % 26 + 65;
	str[3] = rand() % 10 + 48;
	str[4] = rand() % 10 + 48;
	str[5] = rand() % 10 + 48;

    zombie = this->newZombie(str);
    return (zombie);
}
