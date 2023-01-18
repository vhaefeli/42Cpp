/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 17:13:57 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &c)

{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = c;
}

Cat & Cat::operator=(const Cat &c)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &c)
	{
		Animal::operator=(c);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << _type << " destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "'Miaaaouuuu'" << std::endl;
}
