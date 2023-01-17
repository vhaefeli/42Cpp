/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/17 10:54:16 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void ) {
	ClapTrap	Victor("Victor");
	ClapTrap	Merlin("Merlin");

	Victor.attack("Merlin");
	Merlin.takeDamage(8);
	Merlin.attack("Victor");
	Victor.takeDamage(15);
	Merlin.beRepaired(5);
	return 0;
}
