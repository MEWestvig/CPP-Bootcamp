/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: MWestvig <MWestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:09:38 by MWestvig          #+#    #+#             */
/*   Updated: 2019/06/12 15:35:26 by MWestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void) :
    Form("Anonymous", "Shrubbery", \
    ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form(target, "Shrubbery", \
    ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s):
    Form(s.getTarget(), s.getName(), \
    ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    *this = s;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}

ShrubberyCreationForm
&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
  std::ofstream  out_file;

  Form::execute(executor);
  out_file.open(this->getTarget() + "_shrubbery",
               std::ofstream::out | std::ofstream::trunc);
  if (out_file.fail())
  {
      std::cerr << "Error opening the outfile" << std::endl;
  }
  out_file << "          1          " << std::endl;
  out_file << "         / \\         " << std::endl;
  out_file << "        /   \\        " << std::endl;
  out_file << "       /     \\       " << std::endl;
  out_file << "      2       3      " << std::endl;
  out_file << "     / \\     / \\     " << std::endl;
  out_file << "    4   5   6   7    " << std::endl;
  out_file << "   /   / \\     / \\   " << std::endl;
  out_file << "  8   9   1   2   3  " << std::endl;
  out_file << "     /               " << std::endl;
  out_file << "    4                " << std::endl;
  out_file.close();
  return ;
}
