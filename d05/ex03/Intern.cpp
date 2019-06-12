/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:28:13 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:28:19 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const& rhs) {
    *this = rhs;
}
Intern &Intern::operator=(Intern const& rhs) {
	static_cast <void> (rhs);
    return (*this);
}
Intern::~Intern(void)
{
    return ;
}

Intern::FormIncorrect::FormIncorrect(void)
{
  return;
}
Intern::
FormIncorrect::FormIncorrect(FormIncorrect const &src)
{
  *this = src;
  return;
}
Intern::FormIncorrect::~FormIncorrect(void) throw()
{
  return;
}
Intern::FormIncorrect
&Intern::FormIncorrect::operator=(FormIncorrect const &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}
char const *Intern::FormIncorrect::what() const throw()
{
  return ("Invalid name");
}


Form*   Intern::makeForm(std::string name, std::string target) {
    try {
        if (name == "ShrubberyCreationForm") {

            std::cout << "Intern creates " << name << std::endl;
            return new ShrubberyCreationForm(target);

        } else if (name == "RobotomyRequestForm") {

            std::cout << "Intern creates " << name << std::endl;
            return new RobotomyRequestForm(target);

        } else if (name == "PresidentialPardonForm") {

            std::cout << "Intern creates " << name << std::endl;
            return new PresidentialPardonForm(target);
        } else {
			throw Intern::FormIncorrect();
        }
    } catch(std::exception& e) {

        std::cerr << "Intern could not create form: " << e.what() << std::endl;
    }
    return nullptr;
}
