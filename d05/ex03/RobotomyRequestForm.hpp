/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:44:06 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:22 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form
{
private:
  static const int  _sign;
  static const int  _exec;
public:
  RobotomyRequestForm(void);
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  ~RobotomyRequestForm(void);
  RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
  virtual void execute(const Bureaucrat &executor) const;
};

#endif
