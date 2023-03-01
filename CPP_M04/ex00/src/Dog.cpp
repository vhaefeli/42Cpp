/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/01 08:25:29 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Default Dog 🐕 constructor called" << std::endl;
}

Dog::Dog(const Dog &c)

{
	std::cout << "Copy constructor 🐕 Dog called" << std::endl;
	*this = c;
}

Dog & Dog::operator=(const Dog &c)
{
	std::cout << "Copy assignment operator 🐕 Dog called" << std::endl;
	if (this != &c)
	{
		Animal::operator=(c);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << _type << " destructed 🐾" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "'Ouaffff 🐶'" << std::endl;
}
