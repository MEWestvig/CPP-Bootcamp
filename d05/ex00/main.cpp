/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:57:40 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/11 15:08:32 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void checkBureaucrat(std::string name, int grade)
{
  try {
    Bureaucrat test(name, grade);
    std::cout << "Bureaucrat was created." << std::endl;
  }
  catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Bureaucrat test(name, grade);
    test.incrementGrade();
    std::cout << "Grade was incremented." << std::endl;
    test.decrementGrade();
    std::cout << "Grade was reset." << std::endl;
    test.decrementGrade();
    std::cout << "Grade was decremented." << std::endl;
  }
  catch (std::exception & e) {
    std::cout << e.what() << std::endl;
  }
  return;
}

int main() {
  std::string name;
  int grade;

  std::cout << "Enter a name:" << std::endl;
  std::cin >> name;
  std::cout << "Enter a grade:" << std::endl;
  std::cin >> grade;
  checkBureaucrat(name, grade);
  return 0;
}
