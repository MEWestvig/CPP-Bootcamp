/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:48:45 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:18:50 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exec = 45;

RobotomyRequestForm::RobotomyRequestForm(void) :
  Form("Anonymous", "Robotomy", \
  RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
  srand(time(NULL));
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
  Form(target, "Robotomy", \
  RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
  srand(time(NULL));
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s):
  Form(s.getTarget(), s.getName(), \
  RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
  srand(time(NULL));
  *this = s;
  return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
  return ;
}

RobotomyRequestForm
&RobotomyRequestForm::operator= (const RobotomyRequestForm &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
  Form::execute(executor);
    if (rand() % 2 == 0)
    {
        std::cout << "BZZZZZZZZZZ... " << getTarget() \
                  << " has been robotomized successfully !" << std::endl;
    }
    else
    {
        std::cout << "The " << this->getTarget() << " robotomization failed!" \
                  << std::endl;
    }
    return ;
}
