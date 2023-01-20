/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 14:40:23 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
	: _type("Magic")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const std::string	type)
	: _type(type)
{
	std::cout << "AMateria Constructor called for a new " << _type << std::endl;
}

AMateria::AMateria(const AMateria &a)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = a;
}

AMateria & AMateria::operator=(const AMateria &a)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria '" << _type << "' destructed" << std::endl;
}

std::string AMateria::getType() const
{
	return (_type);
}

void AMateria::makeSound() const
{
	std::cout << "'bip bip'" << std::endl;
}

// Brain & AMateria::getBrain()
// {
// 	return (*_brain);
// }
