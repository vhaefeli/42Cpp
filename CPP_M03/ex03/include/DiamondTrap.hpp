/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:17 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/17 13:27:28 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP

//mother class
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

		std::string		_name;

	public:

		DiamondTrap();
		DiamondTrap(const std::string	name);
		DiamondTrap(const DiamondTrap &s);
		DiamondTrap &operator=(const DiamondTrap &s);
		~DiamondTrap();

		void whoAmI();
		void attack(const std::string& target);
};

#endif
