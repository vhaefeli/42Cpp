/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:20:00 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 19:31:57 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
	:AMateria("ice")
{
	std::cout << "Default Ice constructor called" << this << std::endl;
	AMateria::addToList(this);
}

Ice::Ice(const Ice &c)
	:AMateria("ice")
{
	std::cout << "Copy constructor Ice called" << this << std::endl;

	*this = c;
	AMateria::addToList(this);
}

Ice & Ice::operator=(const Ice &c)
{
	std::cout << "Copy assignment operator Ice called" << std::endl;
	if (this != &c)
	{
		AMateria::operator=(c);
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructed" << this << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria	*newIce = new Ice();
	std::cout << "Clone Ice" << std::endl;

	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "🧊 shoots an ice bolt at " << target.getName();
}
