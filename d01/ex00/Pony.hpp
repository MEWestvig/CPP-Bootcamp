/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:05:38 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/05 15:06:01 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Should be Pony.class.hpp but they requested Pony.hpp
#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
public:
    Pony(void);
    ~Pony(void);
	void		setName(std::string);
	void		setAge(std::string);
	void		setColour(std::string);
	void		setGender(std::string);
	std::string getName(void);
    std::string getAge(void);
    std::string getColour(void);
	std::string getGender(void);
private:
    std::string _name;
    std::string _age;
    std::string _colour;
	std::string _gender;
};
#endif
