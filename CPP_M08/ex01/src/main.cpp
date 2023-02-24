/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:50:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 15:24:33 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <cstdlib>

int main (int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "you have to give the size of the table of int (> 2)" << std::endl;
		return 1;
	}

	int		size = atoi(argv[1]);
	Span	sp = Span(size);
	srand (time(NULL));
	if (size < 2)
	{
		std::cout << "you have to give the size of the table of int (> 2)" << std::endl;
		return 1;
	}

	try
	{

		for (int i(0); i < (size / 2); i++)
		{
			sp.addNumber(std::rand() % 1000);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	sp.printNbrs();

	try
	{
		for (int i(0); i < 5; i++)
		{
			int	n;
			std::cout << "enter a number ";
			std::cin >> n;
			sp.addNumber(n);
			std::cout << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

	sp.printNbrs();

	try
	{
		std::cout << "shortest span: " << sp.shortestSpan() <<std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

		try
	{
		std::cout << "longest span: " << sp.longestSpan() <<std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

	sp.printNbrs();

	try
	{
		int	n;

		std::cout << "enter the quantity of numbers you want add: ";
		std::cin >> n;
		sp.addRandom(n);
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

	try
	{
		int	n;

		std::cout << "enter the quantity of numbers you want add: ";
		std::cin >> n;
		sp.addRandom(n);
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

		sp.printNbrs();

	try
	{
		std::cout << "shortest span: " << sp.shortestSpan() <<std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

		try
	{
		std::cout << "longest span: " << sp.longestSpan() <<std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() <<std::endl;
	}

	sp.printNbrs();

	return 0;
}
