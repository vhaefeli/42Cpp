/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:11:42 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 15:14:10 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	Harl::_msgType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
	std::cout << "I'm sure you can do better!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "Look all these informations there! something is not really right!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "Are you sure you don't want to correct it?" << std::endl;
}

void Harl::_error(void)
{
	std::cout << "I told you! it won't be working! Correct the error!" << std::endl;
}

void Harl::complain(std::string level)
{
	int lvl = 0;

	while (lvl < 4)
	{
		if (level == Harl::_msgType[lvl])
		{
			break ;
		}
		lvl++;
	}
	switch (lvl)
	{
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
			break;
		default :
			std::cout << "[Probably complaining about insignificant problem]" << std::endl;
			break;
	}
}
