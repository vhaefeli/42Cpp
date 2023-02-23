/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:15:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/22 15:17:23 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character()
	: _name("John Do")
{
	std::cout << "Character Default constructor called" << std::endl;
	for (int i(0); i < 4 ; i++)
	{
		_materia[i] = NULL;
	}
}

Character::Character(const std::string	name)
	: _name(name)
{
	std::cout << "Character Constructor called for a " << _name << std::endl;
	for (int i(0); i < 4 ; i++)
	{
		_materia[i] = NULL;
	}
}

Character::Character(const Character &buddy)
{
	std::cout << "Character Copy constructor called" << std::endl;
	this->_name = buddy._name + " twin";
	for (int i(0); i < 4 ; i++)
	{
		this->_materia[i] = buddy._materia[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i(0); i < 4 ; i++)
		{
			this->_materia[i] = rhs._materia[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character '" << _name << "' destructed" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	std::cout << "Materia to equip " << m << std::endl;
	if (m)
	{
		for (int i(0); i < 4 ; i++)
		{
			if (this->_materia[i] == NULL)
			{
				this->_materia[i] = m;
				std::cout << "Materia " << m->getType() << " put on place " << i << std::endl;
				break ;
			}
		}
		std::cout << "equipement termine" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (this->_materia[idx] != NULL)
	{
		std::cout << this->_materia[idx] << std::endl;
		std::cout << "Materia " << this->_materia[idx]->getType() << " has been droped " << std::endl;
		this->_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_materia[idx])
	{
		(this->_materia[idx])->use(target);
	}
}

std::ostream &operator<<(std::ostream &o, const Character &uneInstance)
{
	o << uneInstance.getName();
	return (o);
}
