/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:40 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/29 17:55:47 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::fields[NB_DETAILS] = {
	"INDEX",
	"FIRST NAME",
	"LAST NAME",
	"NICKNAME",
	"PHONE NUMBER",
	"DARKEST SECRET"
};

Contact::Contact()
{
	for (int i = 0; i < NB_DETAILS; i++) {
		this->_details[i] = std::string();
	}
	return;
}

Contact::~Contact(void)
{
	return;
}

bool	Contact::setContact(int index)
{
	this->_details[0] = std::to_string(index);
	std::cout << "# Please fill the following:" << std::endl;
	for (int i = 1; i < NB_DETAILS; i++) {
		if (!this->_details[i].empty())
			this->_details[i].clear();
		while (this->_details[i].empty()) {
			std::cout << "# " << fields[i] << ":" << std::endl;
			std::cout << "> ";
			std::getline(std::cin, this->_details[i]);
			if (this->_details[i].empty()) {
				std::cout << "# Error: Empty field." << std::endl;
			}
			if (std::cin.fail())
				break;
		}
	}
	std::cout << "# Contact n°" << this->_details[0] << " added to phonebook.\n" << std::endl;
	return (true);
}

static std::string trunc(std::string s)
{
	if (s.length() <= 10)
		return (s);
	return (s.substr(0, 9) + ".");
}

void	Contact::showContactSmall()
{
	for (int i(0); i < 4; i++)
	{
		if (this->_details[i].empty())
			break ;
		std::cout << "|" << std::right << std::setw(10) << trunc(this->_details[i]);
	}
	std::cout << std::endl;
}

void	Contact::showContactFull()
{
	for (int i(0); i < NB_DETAILS; i++)
	{
		std::cout << fields[i] << ": " << this->_details[i] << std::endl;
	}
}

void	Contact::showHeader()
{
	for (int i(0); i < 4; i++)
	{
		std::cout << "|" << std::right << std::setw(10) << trunc(fields[i]);
	}
	std::cout << std::endl;
}
