/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:50:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/04 00:54:32 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>
#include <cstdlib>

void	convert(std::string s)
{
	// char *c;
	(void)s;
}

int main ()
{
	std::srand (time(NULL));

	std::cout << "--------- INTS ---------" << std::endl;
	{
		int	int1(std::rand() % 10000);
		int	int2(std::rand() % 10000);

		std::cout << "int1 = " << int1 << std::endl;
		std::cout << "int2 = " << int2 << std::endl;
		std::cout << "min = " << ::min(int1, int2) << std::endl;
		std::cout << "max = " << ::max(int1, int2) << std::endl;
		::swap( int1, int2);
		std::cout << "swap !" << std::endl;
		std::cout << "int1 = " << int1 << std::endl;
		std::cout << "int2 = " << int2 << std::endl;
	}
	std::cout << "--------- EQUAL INTS ---------" << std::endl;
	{
		int	int1(std::rand() % 10000);
		int	int2(int1);

		std::cout << "Address of int1: " << &int1 << std::endl;
		std::cout << "Address of int2: " << &int2 << std::endl;
		std::cout << "Address of min(int1, int2): " << &::min(int1, int2) << std::endl;
		std::cout << "Address of max(int1, int2): " << &::max(int1, int2) << std::endl;
	}

	std::cout << "--------- FLOATS ---------" << std::endl;
	{
		float float1(static_cast<float>(std::rand()) / static_cast <float> (RAND_MAX));
		float float2(static_cast<float>(std::rand()) / static_cast <float> (RAND_MAX));

		std::cout << "float1 = " << float1 << std::endl;
		std::cout << "float2 = " << float2 << std::endl;
		std::cout << "min = " << ::min(float1, float2) << std::endl;
		std::cout << "max = " << ::max(float1, float2) << std::endl;
		::swap( float1, float2);
		std::cout << "swap !" << std::endl;
		std::cout << "float1 = " << float1 << std::endl;
		std::cout << "float2 = " << float2 << std::endl;
	}
	std::cout << "--------- DOUBLES ---------" << std::endl;
	{
		double double1(static_cast<double>(std::rand()) / static_cast <double> (RAND_MAX));
		double double2(static_cast<double>(std::rand()) / static_cast <double> (RAND_MAX));

		std::cout << "double1 = " << double1 << std::endl;
		std::cout << "double2 = " << double2 << std::endl;
		std::cout << "min = " << ::min(double1, double2) << std::endl;
		std::cout << "max = " << ::max(double1, double2) << std::endl;
		::swap( double1, double2);
		std::cout << "swap !" << std::endl;
		std::cout << "double1 = " << double1 << std::endl;
		std::cout << "double2 = " << double2 << std::endl;
	}
	std::cout << "--------- STRINGS ---------" << std::endl;
	{
		std::string string1("Chocolat");
		std::string string2("Tea");

		std::cout << "string1 = " << string1 << std::endl;
		std::cout << "string2 = " << string2 << std::endl;
		std::cout << "min = " << ::min(string1, string2) << std::endl;
		std::cout << "max = " << ::max(string1, string2) << std::endl;
		::swap( string1, string2);
		std::cout << "swap !" << std::endl;
		std::cout << "string1 = " << string1 << std::endl;
		std::cout << "string2 = " << string2 << std::endl;
	}
	return 0;
}