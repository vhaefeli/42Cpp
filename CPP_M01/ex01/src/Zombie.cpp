/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:14:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 10:59:15 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name)
	: _name(name)
{
	std::cout << "Constructing Zombie (" << _name << ")" << std::endl;
}

Zombie::Zombie(const Zombie& z)
	: _name(z._name)
{
	std::cout << "Constructing Zombie by copy(" << _name << ")" << std::endl;
}

Zombie &Zombie::operator=(const Zombie& z)
{
	std::cout << "Constructing Zombie by assignement copy(" << _name << ")" << std::endl;
	this->_name = z._name;
	return (*this);
}

Zombie::~Zombie(void)
{
	std::cout << "Destructing zombie (" << _name << ")" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
