/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:48:57 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 14:36:22 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form
{
private:
  bool              _signed;
	int const					_gradeToSign;
  int const					_gradeToExecute;
  std::string const _name;
  std::string       _target;
public:
	Form(void);
	Form(std::string target, std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);
	~Form(void);
	Form	&operator=(Form const &rhs);
  int		   		  getGradeToSign(void) const;
  int           getGradeToExecute(void) const;
  bool          getSigned(void) const;
  std::string   getName(void) const;
	void 				  beSigned(Bureaucrat &bureaucrat);
  virtual void  execute(Bureaucrat const &executor) const = 0;
  void          setTarget(std::string target);
  std::string   getTarget(void) const;

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		GradeTooLowException(GradeTooLowException const &src);
		virtual ~GradeTooLowException(void) throw();
		GradeTooLowException &operator=(GradeTooLowException const &rhs);
		virtual char const *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		GradeTooHighException(GradeTooHighException const &src);
		virtual ~GradeTooHighException(void) throw();
		GradeTooHighException &operator=(GradeTooHighException const &rhs);
		virtual char const *what() const throw();
	};

  class NotSignedException : public std::exception
  {
  public:
    NotSignedException(void);
		NotSignedException(NotSignedException const &src);
		virtual ~NotSignedException(void) throw();
		NotSignedException &operator=(NotSignedException const &rhs);
		virtual char const *what() const throw();
  };
};

std::ostream	&operator<<(std::ostream &out, Form const &rhs);

#endif
