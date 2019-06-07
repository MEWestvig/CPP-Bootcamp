/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:55:52 by mwestvig          #+#    #+#             */
/*   Updated: 2019/06/07 17:03:55 by mwestvig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap
{
public:
	FragTrap(void);
	FragTrap(FragTrap const &src);
	~FragTrap(void);
	FragTrap	&operator=(FragTrap const &rhs);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
private:
	int			_hitPoints;
	int			_maxHitPoints;
	
}

#endif
