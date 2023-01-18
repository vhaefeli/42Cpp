/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/17 13:31:03 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap()
{
	_name = "Anne Onyme";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string	name)
	: ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;

	std::cout << "Constructor DiamondTrap called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &s)
{
	std::cout << "Copy constructor DiamondTrap called" << std::endl;
	*this = s;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &s)
{
	std::cout << "Copy assignment operator DiamondTrap called" << std::endl;
	if (this != &s)
	{
		ClapTrap::operator=(s);
		_name = s._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap '" << _name << "' destructed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap " << _name << " " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
