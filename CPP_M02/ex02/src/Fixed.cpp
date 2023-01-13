/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:25 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 17:49:13 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//***********Constructeurs
Fixed::Fixed()
	: _raw(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
	: _raw(nbr << Fixed::_n_bits_frac)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	this->_raw = roundf(nbr * (1 << Fixed::_n_bits_frac));
	// std::cout << "Float constructor called" << std::endl;
}

//***********constructeur de recopie
Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

//***********surcharge de l'operateur d'affectation
Fixed & Fixed::operator=(const Fixed &f)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->_raw = f.getRawBits(); // pourquoi faut/il passer par la fonction get? on ne peu pas juste mettre f._raw???
	}
	return (*this);
}

//***********destructeur
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}


//***********getteur et setteur
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

//***********Conversion
float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (1 <<  Fixed::_n_bits_frac));
}

int		Fixed::toInt(void) const
{
	return (this->_raw >> Fixed::_n_bits_frac);
}

//***********surcharge de l'operateur d'insertion pour ecrire sur la sortie standard
std::ostream& operator<<(std::ostream& o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}

//***********surcharge des operateurs de comparaison
bool	Fixed::operator>(const Fixed &f) const
{
	return (this->_raw > f._raw);
}

bool	Fixed::operator<(const Fixed &f) const
{
	return (this->_raw < f._raw);
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return (this->_raw >= f._raw);

}

bool	Fixed::operator<=(const Fixed &f) const
{
	return (this->_raw <= f._raw);

}

bool	Fixed::operator==(const Fixed &f) const
{
	return (this->_raw == f._raw);

}

bool	Fixed::operator!=(const Fixed &f) const
{
	return (this->_raw != f._raw);
}

//***********surcharge des operateurs arithmetiques
Fixed	Fixed::operator+(const Fixed &f2) const
{
	Fixed	res;

	res._raw = this->_raw + f2._raw;
	return (res);
}

Fixed	Fixed::operator-(const Fixed &f2) const
{
	Fixed	res;

	res._raw = this->_raw - f2._raw;
	return (res);
}

Fixed	Fixed::operator*(const Fixed &f2) const
{
	return (Fixed(this->toFloat() * f2.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &f2) const
{
	return (Fixed(this->toFloat() / f2.toFloat()));
}

//***********surcharge des operateurs d'incrementation
Fixed	&Fixed::operator++()
{
	this->_raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed	&Fixed::operator--()
{
	this->_raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

//***********fonctions min max

Fixed	Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2) ? f1 : f2;
}

Fixed	Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2) ? f1 : f2;
}

Fixed	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2) ? f1 : f2;
}

Fixed	Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2) ? f1 : f2;
}
