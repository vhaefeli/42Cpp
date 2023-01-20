/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 14:15:12 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
	: _type("Just the newly discovered AAnimal")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string	type)
	: _type(type)
{
	std::cout << "AAnimal Constructor called for a new " << _type << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = a;
}

AAnimal & AAnimal::operator=(const AAnimal &a)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal '" << _type << "' destructed" << std::endl;
}

std::string AAnimal::getType() const
{
	return (_type);
}
