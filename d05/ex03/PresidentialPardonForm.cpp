/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:36:33 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:18:33 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm(void) :
    Form("Anonymous", "Presidential", \
    PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form(target, "Presidential", \
    PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s):
    Form(s.getTarget(), s.getName(), \
    PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
    *this = s;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm
&PresidentialPardonForm::operator= (const PresidentialPardonForm &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." \
              << std::endl;
    return ;
}
