/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:50:02 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/14 13:26:44 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <cmath>

// constructeur par defaut point pos 0,0
Point::Point()
	: _x(Fixed(0)), _y(Fixed(0))
{
	std::cout << "Default constructor called point" <<_x << "," << _y << std::endl;
}

//constructeur avec position du point donnee
Point::Point(const Fixed &x, const Fixed &y)
	: _x(x), _y(y)
{
	std::cout << "Constructor called point" << _x << "," << _y << std::endl;
}

//contructeur par copie
Point::Point(const Point &p)
	: _x(p._x), _y(p._y)	//pourquoi pas *this = p?
{
}

//surcharge de l'operateur d'affectation
Point & Point::operator=(const Point &p)
{
	if (this != &p)
	{
		this->_x = p.getX();
		this->_y = p.getY();
	}
	return (*this);
}

//destructeur
Point::~Point()
{
}

//geteurs
Point::Fixed	getX() const
{
	return (this->_x);
}

Point::Fixed	getY() const
{
	return (this->_y);
}

