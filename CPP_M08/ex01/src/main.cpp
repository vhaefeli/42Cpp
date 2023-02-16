/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:50:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/13 23:50:08 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <cstdlib>

int main (int argc, char **argv)
{
	int		number;
	int		size = atoi(argv[1]);
	Span	sp = Span(size);
	srand (time(NULL));

	while (size --)
	{
		sp.addNumber(std::rand());
	}
	

	try
	{
		std::vector<int>::iterator it = easyfind<std::vector<int> >(myvector, 40);
		std::cout << &it << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cerr << e.what() <<std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind<std::vector<int> >(myvector, 55);
		std::cout << &it << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cerr << e.what() <<std::endl;
	}

	try
	{
		std::vector<int>::iterator it = easyfind<std::vector<int> >(myvector, 18);
		std::cout << *it << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cerr << e.what() <<std::endl;
	}
	return 0;
}
