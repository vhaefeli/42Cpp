/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/17 13:13:49 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		SCAVTRAP_HPP
# define	SCAVTRAP_HPP

//mother class
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:

		ScavTrap();
		ScavTrap(const std::string	name);
		ScavTrap(const ScavTrap &s);
		ScavTrap &operator=(const ScavTrap &s);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target);
};

#endif
