/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:25 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 09:18:31 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
	: _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed(int const nbr)
	: _raw(0)
{

}

Fixed(float const nbr)
{

}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed & Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->_raw = f.getRawBits(); // pourquoi faut/il passer par la fonction get? on ne peu pas juste mettre f._raw???
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

float	toFloat( void ) const
{

}
int		toInt( void ) const
{

}

std::ostream& operator<<(std::ostream& o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
