/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:45:57 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:27 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm : public Form
{
private:
  static const int  _sign;
  static const int  _exec;
public:
  ShrubberyCreationForm(void);
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(ShrubberyCreationForm const &src);
  ~ShrubberyCreationForm(void);
  ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
  virtual void execute(const Bureaucrat &executor) const;
};

#endif
