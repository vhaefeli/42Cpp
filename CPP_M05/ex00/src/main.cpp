/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 17:57:44 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main( void )
{
	try
	{
		Bureaucrat Bob("Bob", 50);
		Bureaucrat Luc("Luc", 151);
		Bureaucrat Anna("Anna", 2);
		std::cout << Anna << " will be promoted" << std::endl;
		Anna.promote();
		std::cout << Anna << " just get promoted" << std::endl;
		Anna.promote();
		std::cout << Anna << " just get promoted" << std::endl;
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
