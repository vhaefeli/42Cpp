*/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:15:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 19:41:58 by vhaefeli         ###   ########.fr       */
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
		_materia[i] = NULL;
	}
	*this = buddy;
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i(0); i < 4 ; i++)
		{
			if (this->_materia[i])
			{
				AMateria::deleteOneMateria(this->_materia[i]);
				this->_materia[i]= NULL;
			}
			if (rhs._materia[i])
			{
				this->_materia[i] = rhs._materia[i]->clone();
			}

		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i(0); i < 4 ; i++)
	{
		if (this->_materia[i])
		{
			AMateria::deleteOneMateria(this->_materia[i]);
			this->_materia[i]= NULL;
		}
	}
	std::cout << "Character '" << _name << "' destructed" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i(0); i < 4 ; i++)
		{
			if (this->_materia[i] == NULL)
			{
				this->_materia[i] = m;
				std::cout << this->_name << " equiped a Materia ";
				std::cout << m->getType() << " on place " << i << std::endl;
				break ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_materia[idx] != NULL)
	{
		std::cout << "Materia " << this->_materia[idx]->getType() << " has been droped " << std::endl;
		this->_materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_materia[idx])
	{
		std::cout << "* " << this->_name << " ";
		(this->_materia[idx])->use(target);
		std::cout << " *" <<std::endl;
	}
	else
		std::cout << "* oh! " << this->_name << " has no equipment in compartiment " << idx << " *" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Character &uneInstance)
{
	o << uneInstance.getName();
	return (o);
}
