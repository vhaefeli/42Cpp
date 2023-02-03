/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:30:32 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 22:38:39 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <cstdlib>
#include <iostream>

Base * generate(void)
{
	Base	*b;
	static int success = 0;

	success = std::rand()%3;
	switch (success)
	{
	case 0:
		b = new A;
		break;
	case 1:
		b = new B;
		break;
	case 2:
		b = new C;
		break;
	}
	return b;
}

void	identify(Base *p)
{
	
	std::cout << "cast A " << dynamic_cast<A *>(p)<< std::endl;
	std::cout << "cast B " << dynamic_cast<B *>(p)<< std::endl;
	std::cout << "cast C " << dynamic_cast<C *>(p)<< std::endl;
	std::cout << "Identify a pointer: is of type ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;

}

void identify(Base &ref)
{
	std::cout << "Identify a reference: is type ";
	try
	{
		A &a = dynamic_cast<A&>(ref);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception& e){}

	try
	{
		B &a = dynamic_cast<B&>(ref);
		(void)a;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception& e){}

	try
	{
		C &a = dynamic_cast<C&>(ref);
		(void)a;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception& e){}
	std::cout << "Unknown" << std::endl;
}