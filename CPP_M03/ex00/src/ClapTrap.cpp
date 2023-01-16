/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/16 16:27:56 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name ("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string	name)
	: _name (name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &c)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &c)
	{
		this->_name = c.getName();
		this->_hitPoints = c._hitPoints;
		this->_energyPoints = c._energyPoints;
		this->_attackDamage = c._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap '" << _name << "' destructed" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		target.takeDamage(_attackDamage);
		_energyPoints--;
		std::cout << "ClapTrap " << target << " attacks " << target.getName()
		<< " causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is too weak to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints = 0)
	{
		std::cout << "ClapTrap '" << _name << "' is already dead and cannot take"
			" damage anymore." << std::endl;
		return ;
	}
	if (amount >= _hitPoint)
	{
		_hitPoints = 0;
		std::cout << "Aie! ClapTrap '" << _name << "' is dead" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap '" << _name << "' takes " << amount << " points"
		" of damage (live left: " << _hitPoints << "!" << std::endl;
		return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{

}

