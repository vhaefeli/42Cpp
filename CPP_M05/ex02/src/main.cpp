/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/26 22:33:01 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AFrom.hpp"
#include <iostream>

int main( void )
{
	try
	{
		Bureaucrat	Bob("Bob", 50);
		Bureaucrat	Luc("Luc", 150);
		Bureaucrat	Anna("Anna", 2);
		ShrubberzCreationForm	Forest1("Broceliande");

		std::cout << Anna << " will be promoted" << std::endl;
		Anna.promote();
		std::cout << Anna << " just get promoted" << std::endl;
		Anna.promote();
		std::cout << Anna << " just get promoted" << std::endl;
		Bob.demote();
		std::cout << Bob << " just get demoted" << std::endl;
		Bob.signForm(bestForm);
		Bob.promote();
		std::cout << Bob << " just get promoted" << std::endl;
		Bob.signForm(bestForm);
		Anna.signForm(secondForm);
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
