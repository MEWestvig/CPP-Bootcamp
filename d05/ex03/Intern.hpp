/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:28:38 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:15 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <stdexcept>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(Intern const &src);
	~Intern(void);

	Intern	&operator=(Intern const &rhs);
	Form	*makeForm(std::string name, std::string target);

	class FormIncorrect : public std::exception
	{
	public:
		FormIncorrect(void);
		FormIncorrect(FormIncorrect const &src);
		virtual ~FormIncorrect(void) throw();
		FormIncorrect &operator=(FormIncorrect const &rhs);
		virtual char const *what() const throw();
	};
};

#endif
