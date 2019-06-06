/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:47:47 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:28 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int);
    ZombieHorde(void);
    ~ZombieHorde(void);
	Zombie      *newZombie(std::string);
	std::string	randomName(void);

private:
	Zombie      *_zombie;
	int         _number;
};

#endif
