/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:50:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/13 18:26:06 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

#include <iostream>

int main ()
{
	std::vector<int> myvector;

	myvector.push_back(10);
	myvector.push_back(25);
	myvector.push_back(40);
	myvector.push_back(55);

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
