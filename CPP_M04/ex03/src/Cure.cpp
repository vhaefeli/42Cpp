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
{
	new AMateria("cure");
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &c)

{
	std::cout << "Copy constructor Cure called" << std::endl;
	new AMateria("cure");
}

Cure & Cure::operator=(const Cure &c)
{
	std::cout << "Copy assignment operator Cure called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	delete (this);
	std::cout << "Cure destructed" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria	*clone = new Cure();

	std::cout << "Clone Cure" << std::endl;

	return (clone);
}