/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:44:11 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:10 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
    Zombie      *zombie_1;
	Zombie      *zombie_2;
    ZombieEvent event;

    zombie_1 = event.randomChump();
    zombie_1->announce();
    delete zombie_1;

	event.setZombieType("dead thing");
    zombie_2 = event.randomChump();
    zombie_2->announce();
    delete zombie_2;
    return (0);
}
