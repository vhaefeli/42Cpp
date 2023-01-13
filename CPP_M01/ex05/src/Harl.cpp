/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:11:42 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 11:14:37 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	Harl::_msgType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
void (Harl::*Harl::_fcts[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error}; //variable tableau de pointeurs sur fonctions ?

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I'm sur you can do better!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl
	<< "Look all these informations there! something is not really right!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
	<< "Are you sure you don't want to correct it?" << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl
	<< "I told you! it won't be working! Correct the error!" << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i(0); i < 4; i++)
	{
		if (level == Harl::_msgType[i])
		{
			(this->*(Harl::_fcts[i]))();
			break ;
		}
	}
}
