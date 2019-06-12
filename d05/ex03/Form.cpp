/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:55:49 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:13 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
    _signed(false),
    _gradeToSign(1),
    _gradeToExecute(1),
    _name("undefined"),
    _target("undefined")
{
    return ;
}
Form::Form(std::string target, std::string name, int gradeToSign, int gradeToExecute) :
    _signed(false),
    _gradeToSign(gradeToSign),
    _gradeToExecute(gradeToExecute),
    _name(name),
    _target(target)
{
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
    {
        throw Form::GradeTooLowException();
    }
    return ;
}
Form::Form(const Form &src) :
    _signed(src._signed),
    _gradeToSign(src._gradeToSign),
    _gradeToExecute(src._gradeToExecute),
    _name(src._name),
    _target(src._target)
{
    *this = src;
    return ;
}
Form::~Form(void)
{
    return;
}
Form	&Form::operator=(Form const &rhs)
{
  if (this != &rhs)
  {
    this->_signed = rhs._signed;
  }
	return (*this);
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
  if (bureaucrat.getGrade() > this->_gradeToSign)
  {
    throw Form::GradeTooLowException();
  }
  else
  {
    this->_signed = true;
  }
  return ;
}

bool Form::getSigned(void) const
{
  return (this->_signed);
}
int Form::getGradeToSign(void) const
{
  return (this->_gradeToSign);
}
int Form::getGradeToExecute(void) const
{
  return (this->_gradeToExecute);
}
std::string Form::getName(void) const
{
  return (this->_name);
}
Form::GradeTooLowException::GradeTooLowException(void)
{
  return;
}
Form::
GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
  *this = src;
  return;
}
Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
  return;
}
Form::GradeTooLowException
&Form::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}
char const *Form::GradeTooLowException::what() const throw()
{
  return ("Grade is too low.");
}
Form::GradeTooHighException::GradeTooHighException(void)
{
  return;
}
Form::
GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
  *this = src;
  return;
}
Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
  return;
}
Form::GradeTooHighException
&Form::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}
char const *Form::GradeTooHighException::what() const throw()
{
  return ("Grade is too high.");
}
Form::NotSignedException::NotSignedException(void)
{
  return;
}
Form::
NotSignedException::NotSignedException(NotSignedException const &src)
{
  *this = src;
  return;
}
Form::NotSignedException::~NotSignedException(void) throw()
{
  return;
}
Form::NotSignedException
&Form::NotSignedException::operator=(NotSignedException const &rhs)
{
  static_cast <void> (rhs);
  return (*this);
}
char const *Form::NotSignedException::what() const throw()
{
  return ("Form is not signed!");
}
std::ostream &operator<< (std::ostream &out, Form const &rhs)
{
  out << "The " << rhs.getName() << " is signed: " << rhs.getSigned() << \
  " Grade to sign: " << rhs.getGradeToSign() << " Grade to execute: " << rhs.getGradeToExecute() << std::endl;
  return (out);
}
void Form::execute(Bureaucrat const & executor) const
{
  if (this->_signed == false)
  {
    throw Form::NotSignedException();
  }
  else if (this->_gradeToExecute < executor.getGrade())
  {
    throw Form::GradeTooLowException();
  }
}
void Form::setTarget(std::string target)
{
  this->_target = target;
}
std::string Form::getTarget(void) const
{
  return (this->_target);
}
