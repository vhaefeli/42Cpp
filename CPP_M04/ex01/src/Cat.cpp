/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 12:26:28 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "avant new Brain ad: " << _catsBrain << std::endl;
	_catsBrain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
	std::cout << "Brain ad: " << _catsBrain << std::endl;
	std::cout << "Brain &: " << &_catsBrain << std::endl;
}

Cat::Cat(const Cat &c)

{
	std::cout << "Copy constructor Cat called" << std::endl;
	std::cout << "1 copy const Brain ad: " << _catsBrain << std::endl;
	this->_catsBrain = new Brain();
	std::cout << "2copy const Brain ad: " << _catsBrain << std::endl;
	*this = c;
}

Cat & Cat::operator=(const Cat &c)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &c)
	{
		Animal::operator=(c);
		*(this->_catsBrain) = *(c._catsBrain);
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

Brain & Cat::getBrain()
{
	return (*_catsBrain);
}
