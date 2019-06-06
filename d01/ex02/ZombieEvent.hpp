/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:45:26 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:15 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
public:
    ZombieEvent(void);
    ~ZombieEvent(void);
	void        setZombieType(std::string);
	std::string getZombieType(void);
	Zombie      *newZombie(std::string);
	Zombie      *randomChump(void);

private:
	std::string  _type;
};

#endif
