/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:03:30 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 15:03:56 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

static void heapPonies(void)
{
	Pony    *trotter = new Pony();

	trotter->setName("Trotter");
	std::cout << "Name: " << trotter->getName() << std::endl;
	trotter->setAge("58");
	std::cout << "Age: " << trotter->getAge() << std::endl;
	trotter->setColour("Brown");
	std::cout << "Colour: " << trotter->getColour() << std::endl;
	trotter->setGender("Male");
	std::cout << "Gender: " << trotter->getGender() << std::endl << std::endl;
}

static void stackPonies(void)
{
	Pony non_Trotter;

	non_Trotter.setName("non-Trotter");
	std::cout << "Name: " << non_Trotter.getName() << std::endl;
	non_Trotter.setAge("12");
	std::cout << "Age: " << non_Trotter.getAge() << std::endl;
	non_Trotter.setColour("White");
	std::cout << "Colour: " << non_Trotter.getColour() << std::endl;
	non_Trotter.setGender("Female");
	std::cout << "Gender: " << non_Trotter.getGender() << std::endl << std::endl;
}

int main() {
	std::cout << "A heap of ponies" << std::endl << std::endl;
	heapPonies();
	std::cout << "A stack of ponies" << std::endl << std::endl;
	stackPonies();
	std::cout << std::endl;
	return 0;
}
