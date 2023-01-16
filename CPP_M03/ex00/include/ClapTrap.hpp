/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/16 13:30:47 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		CLAPTRAP_HPP
# define	CLAPTRAP_HPP

class ClapTrap
{
	private:


	std::string	_name;
	int			_hit = 10;
	int			_energy = 10;
	int			_attackDamage = 0;

	public:

		ClapTrap();
		ClapTrap(const ClapTrap &f);
		ClapTrap &operator=(const ClapTrap &f);
		~ClapTrap();

		std::string getName(void) const;
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
