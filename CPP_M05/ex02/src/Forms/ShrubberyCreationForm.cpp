/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:00:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/26 22:30:09 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137), _target("MysteryForest")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f)
	: AForm(f.getName, 145, 137), _target(f._target)
{
	*this = f;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	(void)f;
	return (*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "From '" << _name << "' destructed" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

	std::ofstream os(_target + "_shrubbery");

	os << "                                  /\ " << std::endl;
	os << "          %%%,%%%%%%%          o8   8 oo" << std::endl;
	os << "          ,'%% \\-*%%%%%%%    .88  8   88o" << std::endl;
	os << "     ;%%%%%*%   _%%%%      ..oo8 0 o o 88.. " << std::endl;
	os << "      ,%%%       \(_.*%%%%..oo88\ \ oo / /.." << std::endl;
	os << "      % *%%, ,%%%%*(    '    .oo88 o. oo88" << std::endl;
	os << "    %^     ,*%%% )\|,%%*%,_     88 \//" << std::endl;
	os << "        *%    \/ #).-*%%*         ) \ *%," << std::endl;
	os << "            _.) ,/ *%,            )#( " << std::endl;
	os << "             /)#( " << std::endl;
	os.close();
}	
