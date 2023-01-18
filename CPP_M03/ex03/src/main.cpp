/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 13:45:07 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main( void ) {
	ClapTrap	Victor("Victor");
	ClapTrap	Merlin("Merlin");
	ScavTrap	Ludivine("Ludivine");
	FragTrap	Germaine("Germaine");
	DiamondTrap	Grut("Grut");
	DiamondTrap Anne;

	Grut.whoAmI();
	Victor.attack("Merlin");
	Merlin.takeDamage(8);
	Merlin.attack("Victor");
	Victor.takeDamage(15);
	Merlin.beRepaired(5);
	Merlin.attack("Ludivine");
	Ludivine.takeDamage(0);
	Ludivine.attack("Merlin");
	Ludivine.guardGate();
	Germaine.attack("gost of Victor");
	Grut.attack("gost of Vicor");
	Grut.beRepaired(3);
	Germaine.highFivesGuys();
	Grut.whoAmI();
	Anne.whoAmI();

	return 0;
}
