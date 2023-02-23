/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 12:31:34 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure()
	:AMateria("cure")
{
	std::cout << "Default Cure constructor called" << this << std::endl;
	AMateria::addToList(this);
}

Cure::Cure(const Cure &c)
	:AMateria("cure")
{
	std::cout << "Copy constructor Cure called" << this << std::endl;
	*this = c;
	AMateria::addToList(this);
}

Cure & Cure::operator=(const Cure &c)
{
	std::cout << "Copy assignment operator Cure called" << std::endl;
	if (this != &c)
	{
		AMateria::operator=(c);
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructed" << this << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria	*newCure = new Cure();
	std::cout << "Clone Cure" << newCure << std::endl;

	return (newCure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "heals " << target.getName() << "’s wounds 🤕";
}
