/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:27:39 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:13 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Form;

class Bureaucrat
{
private:
	std::string 			_name;
	int								_grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);
	Bureaucrat	&operator=(Bureaucrat const &rhs);
	void 				setGrade(int grade);
	void				setName(std::string name);
	int					getGrade(void) const;
	std::string	getName(void) const;
	void				incrementGrade(void);
	void				decrementGrade(void);
	void 				signForm(Form &form);
	void				executeForm(Form const & form);

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
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif
