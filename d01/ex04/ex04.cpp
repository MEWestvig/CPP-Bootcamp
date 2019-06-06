/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:46:49 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:31 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string brainMessage = "HI THIS IS BRAIN";
	std::string* brainMessagePtr = &brainMessage;
	std::string& brainMessageRef = brainMessage;

	std::cout << *brainMessagePtr << std::endl;
	std::cout << brainMessageRef << std::endl;
	return 0;
}
