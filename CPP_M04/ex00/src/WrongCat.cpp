/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/01 08:25:04 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat 👾 constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)

{
	std::cout << "Copy constructor WrongCat 👾 called" << std::endl;
	*this = c;
}

WrongCat & WrongCat::operator=(const WrongCat &c)
{
	std::cout << "Copy assignment operator 👾 WrongCat called" << std::endl;
	if (this != &c)
	{
		WrongAnimal::operator=(c);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << _type << " destructed🛸" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "'Hello! I'm Form space 👾'" << std::endl;
}
