/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 14:16:01 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
	: AAnimal("Dog")
{
		_dogsBrain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &c)

{
	std::cout << "Copy constructor Dog called" << std::endl;
	this->_dogsBrain = new Brain();
	*this = c;
}

Dog & Dog::operator=(const Dog &c)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &c)
	{
		AAnimal::operator=(c);
		*(this->_dogsBrain) = *(c._dogsBrain); // copie en profondeur
	}
	return (*this);
}

Dog::~Dog()
{
	delete _dogsBrain;
	std::cout << _type << " destructed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "'Ouaffff'" << std::endl;
}

Brain & Dog::getBrain()
{
	return (*_dogsBrain);
}
