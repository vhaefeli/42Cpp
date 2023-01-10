/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:54:38 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/10 15:42:34 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon(std::string type)
	: _type(type)
{
}

std::string const &Weapon::getType()
{
	return (this->_type);
}

void Weapon::setType(std::string	type)
{
	this->_type = type;
}
