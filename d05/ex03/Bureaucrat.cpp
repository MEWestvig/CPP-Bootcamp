/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:28:10 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:11 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
  return;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
{
  if (grade < 1)
  {
    throw Bureaucrat::GradeTooHighException();
  }
  else if (grade > 150)
  {
    throw Bureaucrat::GradeTooLowException();
  }
  else
  {
    this->_name = name;
    this->_grade = grade;
  }
  return;
}
Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
  *this = src;
  return;
}
Bureaucrat::~Bureaucrat(void)
{
    return;
}
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
  if (this != &rhs)
  {
    this->_name = rhs._name;
    this->_grade = rhs._grade;
  }
	return (*this);
}
std::string Bureaucrat::getName(void) const
{
  return (this->_name);
}
int Bureaucrat::getGrade(void) const
{
  return (this->_grade);
}
void Bureaucrat::setName(std::string name)
{
  this->_name = name;
  return;
}
void Bureaucrat::setGrade(int grade)
{
  if (grade < 1)
  {
    throw Bureaucrat::GradeTooHighException();
  }
  else if (grade > 150)
  {
    throw Bureaucrat::GradeTooLowException();
  }
  else
  {
    this->_grade = grade;
  }
  return;
}
void Bureaucrat::incrementGrade(void)
{
  if (this->_grade <= 1)
  {
    throw Bureaucrat::GradeTooHighException();
  }
  else
  {
    this->_grade -= 1;
  }
  return;
}
void Bureaucrat::decrementGrade(void)
{
  if (this->_grade >= 150)
  {
    throw Bureaucrat::GradeTooLowException();
  }
  else
  {
    this->_grade += 1;
  }
  return;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
  return;
}
Bureaucrat::
GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
  *this = src;
  return;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
  return;
}
Bureaucrat::GradeTooLowException
&Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}
char const *Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Grade is too low.");
}
Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
  return;
}
Bureaucrat::
GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
  *this = src;
  return;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
  return;
}
Bureaucrat::GradeTooHighException
&Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}
char const *Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Grade is too high.");
}
void Bureaucrat::signForm(Form &form)
{
  try
  {
    form.beSigned(*this);
    std::cout << this->_name << " signs " << form.getName() << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
  }
  return ;
}
std::ostream &operator<< (std::ostream &out, Bureaucrat const &rhs)
{
  out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
  return (out);
}
void Bureaucrat::executeForm(const Form &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " \
                  << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " has failed to execute " \
                  << form.getName() << " because " << e.what() << std::endl;
    }
}
