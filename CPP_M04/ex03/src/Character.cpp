/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:15:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/21 21:17:49 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character()
	: _name("John Do")
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(const std::string	name)
	: _name(name)
{
	std::cout << "Character Constructor called for a new " << _type << std::endl;
}

Character::Character(const Character &a)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = a;
}

Character & Character::operator=(const Character &a)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
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
