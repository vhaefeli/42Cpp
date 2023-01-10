/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:14:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/10 15:43:09 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name)
	: name(name), weapon(NULL)
{
}

void	HumanB::attack( void )
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with its bare hands !" << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	if (w.getType().empty())
	{
		std::cerr << "HumanB cannot equip a weapon with empty type" << std::endl;
		return ;
	}
	this->weapon = &w;
}
