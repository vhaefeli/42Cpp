/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:15:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/22 09:42:06 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

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
	std::cout << "Character Constructor called for a new " << _type << std::endl;
	for (int i(0); i < 4 ; i++)
	{
		_materia[i] = NULL;
	}
}

Character::Character(const Character &buddy)
	: _name(a._name + "twin")
{
	std::cout << "Character Copy constructor called" << std::endl;
	for (int i(0); i < 4 ; i++)
	{
		this->_materia[i] = buddy._materia[i];
	}
}

Character & Character::operator=(const Character &rhs)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &a)
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
	std::cout << "Character '" << _type << "' destructed" << std::endl;
}

std::string Character::getType() const
{
	return (_type);
}

void Character::makeSound() const
{
	std::cout << "'bip bip'" << std::endl;
}

// Brain & Character::getBrain()
// {
// 	return (*_brain);
// }
