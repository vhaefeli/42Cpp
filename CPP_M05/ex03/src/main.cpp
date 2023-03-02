/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/02 10:00:42 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main( void )
{
	try
	{
		Bureaucrat	Bob("Bob", 146);
		Bureaucrat	Luc("Luc", 150);
		Bureaucrat	Anna("Anna", 2);
		Intern		Maurice;
		ShrubberyCreationForm	Forest1("Broceliande");
		RobotomyRequestForm		Upgrade1("Alfonse");
		RobotomyRequestForm		Upgrade2("Louis");
		AForm					*Upgrade;
		PresidentialPardonForm	Pardon("Capt'ain Jack");

		std::cout << Anna << " will be promoted" << std::endl;
		Anna.promote();
		std::cout << Anna << " just get promoted" << std::endl;
		// Bob.signForm(Forest1);
		// Anna.executeForm(Forest1);
		// Bob.promote();
		// std::cout << Bob << " just get promoted" << std::endl;
		// Bob.signForm(Forest1);
		// Bob.executeForm(Forest1);
		// Anna.executeForm(Forest1);
		Upgrade = Maurice.makeForm("RobotomyRequestForm", "Maurice");
		Anna.signForm(*Upgrade);
		Anna.executeForm(*Upgrade);
		Anna.signForm(Upgrade1);
		Anna.signForm(Upgrade1);
		std::cout << "Upgrade1 is signed: " << Upgrade1.getSignedStatus() << std::endl;
		std::cout << "Target: " << Upgrade1.getTarget() << std::endl;
		std::cout << "Upgrade2 is signed: " << Upgrade2.getSignedStatus() << std::endl;
		std::cout << "Target: " << Upgrade2.getTarget() << std::endl;
		Upgrade2 = Upgrade1;
		std::cout << "Upgrade1 is signed: " << Upgrade1.getSignedStatus() << std::endl;
		std::cout << "Target: " << Upgrade1.getTarget() << std::endl;
		std::cout << "Upgrade2 is signed: " << Upgrade2.getSignedStatus() << std::endl;
		std::cout << "Target: " << Upgrade2.getTarget() << std::endl;
		Anna.executeForm(Upgrade1);
		// Anna.signForm(Upgrade2);
		Anna.executeForm(Upgrade2);
		// Anna.signForm(Pardon);
		// Anna.executeForm(Pardon);
		delete Upgrade;
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
