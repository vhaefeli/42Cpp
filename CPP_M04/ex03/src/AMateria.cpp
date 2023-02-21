/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/21 21:13:14 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
	: _type("Magic")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
	: _type(type)
{
	std::cout << "AMateria Constructor called for a new " << _type << std::endl;
}

AMateria::AMateria(const AMateria &mat)
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

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	if (_type = "ice")
	{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
	if (_type = "cure")
	{
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	}
}
