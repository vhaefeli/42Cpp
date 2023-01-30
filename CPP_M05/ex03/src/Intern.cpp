/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:24:50 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/30 13:20:34 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
	std::cout << "Constructor called for intern " << std::endl;
}
Intern::Intern(const Intern &i)
{
	*this = i;
}
Intern	&Intern::operator=(const Intern &i)
{
	if (&i == this)
		return (*this);
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructor called for Intern" << std::endl;
}

AForm *Intern::makeForm(std::string formType, std::string target)
{
	AForm *newForm = NULL;
	std::string formTypes[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int fType = 0;

	while (fType < 3)
	{
		if (formTypes[fType] == formType)
			break;
		fType++;
	}
	switch(fType)
	{
		case 0:
			newForm = new ShrubberyCreationForm(target);
		break;
		case 1:
			newForm = new RobotomyRequestForm(target);
		break;
		case 2:
			newForm = new PresidentialPardonForm(target);
		break;
		default:
		{
			std::cerr << "Intern is ashamed because he doesn't know the form he "
			"was asked to create : " << formType << std::endl;
			std::cout << "please ask for ShrubberyCreationForm, RobotomyRequestForm "
			"or PresidentialPardonForm" << std::endl;
		}
	}
	std::cout << "Intern creat a " << formType << std::endl;
	return (newForm);
}
