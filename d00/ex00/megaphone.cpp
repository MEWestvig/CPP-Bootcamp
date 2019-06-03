/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:52:50 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/03 11:53:26 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>

void megaphone(int argc, char const *argv[])
{
  int i;
  int j;

  i = 1;
  j = 0;
  while (i < argc) {
    while (argv[i][j])
    {
      std::cout << (char)toupper(argv[i][j]);
      j++;
    }
    i++;
    j = 0;
  }
  std::cout << std::endl;
}

int main(int argc, char const *argv[]) {
  if (argc > 1)
  {
    megaphone(argc, argv);
  }
  else
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  }
  return 0;
}
