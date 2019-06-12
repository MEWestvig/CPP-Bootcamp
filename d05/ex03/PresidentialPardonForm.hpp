/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:10:17 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 14:15:46 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public Form
{
private:
  static const int  _sign;
  static const int  _exec;
public:
  PresidentialPardonForm(void);
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(PresidentialPardonForm const &src);
  ~PresidentialPardonForm(void);
  PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
  virtual void execute(const Bureaucrat &executor) const;
};

#endif
