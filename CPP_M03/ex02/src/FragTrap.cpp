/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 13:47:07 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string	name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "Constructor FragTrap called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &s)

{
	std::cout << "Copy constructor FragTrap called" << std::endl;
	*this = s;
}

FragTrap & FragTrap::operator=(const FragTrap &s)
{
	std::cout << "Copy assignment operator FragTrap called" << std::endl;
	if (this != &s)
	{
		ClapTrap::operator=(s);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap '" << _name << "' destructed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is asking for High fives!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target
		<< " causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " is too weak to attack!" << std::endl;
}
