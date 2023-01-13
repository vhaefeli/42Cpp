/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:25 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 17:07:36 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
	: _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
	: _raw(nbr << Fixed::_n_bits_frac)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	this->_raw = roundf(nbr * (1 << Fixed::_n_bits_frac));
	std::cout << "Float constructor called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}
void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 <<  Fixed::_n_bits_frac));
}

int		Fixed::toInt(void) const
{
	return (this->_raw >> Fixed::_n_bits_frac);
}

std::ostream& operator<<(std::ostream& o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
