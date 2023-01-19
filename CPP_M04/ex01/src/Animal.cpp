/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 14:18:43 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: _type("Just the newly discovered animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string	type)
	: _type(type)
{
	std::cout << "Animal Constructor called for a new " << _type << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = a;
}

Animal & Animal::operator=(const Animal &a)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &a)
	{
		this->_type = a._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal '" << _type << "' destructed" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "'bip bip'" << std::endl;
}

void Animal::setIdea(const std::string &newidea, int j)
{
	this->_brain->setIdea(newidea,j);
}


const std::string	&Animal::getIdea(int i) const
{
	this->_brain->getIdea(i);
}