/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 13:22:09 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
	: Animal("Cat")
{
	_catsBrain = new Brain();
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
	delete _catsBrain;
	std::cout << _type << " destructed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "'Miaaaouuuu'" << std::endl;
}

void Cat::setIdea(const std::string &newidea, int j)
{
	this->_catsBrain->setIdea(newidea,j);
}


const std::string	&Cat::getIdea(int i) const
{
	this->_catsBrain->getIdea(i);
}
