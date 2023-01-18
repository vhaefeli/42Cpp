/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/17 13:43:39 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main( void ) {
	ClapTrap	Victor("Victor");
	ClapTrap	Merlin("Merlin");
	ScavTrap	Ludivine("Ludivine");
	FragTrap	Germaine("Germaine");

	Victor.attack("Merlin");
	Merlin.takeDamage(8);
	Merlin.attack("Victor");
	Victor.takeDamage(15);
	Merlin.beRepaired(5);
	Merlin.attack("Ludivine");
	Ludivine.takeDamage(0);
	Ludivine.attack("Merlin");
	Ludivine.guardGate();
	ClapTrap	Gost(Victor);
	for(int i(0); i < 51; i++)
	{
		Ludivine.attack("gost of Victor");
		Gost.takeDamage(30);
	}
	Germaine.attack("gost of Victor");
	Gost.takeDamage(30);
	Germaine.highFivesGuys();
	return 0;
}
