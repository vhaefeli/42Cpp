/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/28 16:37:27 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <iostream>

int main( void )
{
	try
	{
		Bureaucrat	Bob("Bob", 146);
		Bureaucrat	Luc("Luc", 150);
		Bureaucrat	Anna("Anna", 2);
		ShrubberyCreationForm	Forest1("Broceliande");
		RobotomyRequestForm		Upgrade("Maurice");
		RobotomyRequestForm		Upgrade1("Alfonse");
		RobotomyRequestForm		Upgrade2("Jackie");
		PresidentialPardonForm	Pardon("Capt'ain Jack");

		std::cout << Anna << " will be promoted" << std::endl;
		Anna.promote();
		std::cout << Anna << " just get promoted" << std::endl;
		Bob.signForm(Forest1);
		Anna.executeForm(Forest1);
		Bob.promote();
		std::cout << Bob << " just get promoted" << std::endl;
		Bob.signForm(Forest1);
		Bob.executeForm(Forest1);
		Anna.executeForm(Forest1);
		Anna.signForm(Upgrade);
		Anna.executeForm(Upgrade);
		Anna.signForm(Upgrade1);
		Anna.executeForm(Upgrade1);
		Anna.signForm(Upgrade2);
		Anna.executeForm(Upgrade2);
		Anna.signForm(Pardon);
		Anna.executeForm(Pardon);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what()  << std::endl;
	}
	return 0;
}
