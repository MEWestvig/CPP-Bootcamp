/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:47:36 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/06 14:48:20 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
    Zombie(void);
    ~Zombie(void);
	void		setName(std::string);
	void		setType(std::string);
	void 		announce();
	std::string getName(void);
    std::string getType(void);
private:
    std::string _name;
    std::string _type;
};
#endif
