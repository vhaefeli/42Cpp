/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScallarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:31:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/01 19:02:16 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <climits>
#include <cmath>
#include <float.h>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &sc)
{
	*this = sc;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &sc)
{
	if (this != &sc)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	
}

void ScalarConverter::convert(const char *src)
{
	char	c;
	int		i;
	float	f;
	double	d;
	int		minmax = 0;
	d = atof(src);
	if (d == -1 && src[3])
	{
		if (src[0] == '-')
			minmax = -1;
		else
			minmax = 1;
	}
	// Char
	std::cout << "cast in string is: ";
	if (d > 32 && d < 127)
	{
		c = static_cast<char>(d);
		std::cout << c << std::endl;
	}
	else
		std::cout << "not defined" << std::endl;
	// int
	std::cout << "cast in int is: ";
	if (minmax == -1 || d < INT_MIN)
	{
		std::cout << "smaller than int min" << std::endl;
	}
	else if (minmax == 1 || d > INT_MAX)
	{
		std::cout << "bigger than int max" << std::endl;
	}
	else
	{
		if (isalpha(src[0]))
			i = static_cast<int>(src[0]);
		else
			i = static_cast<int>(d);
		std::cout << i << std::endl;
	}
	// float
	std::cout << "cast in float is: ";
	if (minmax == -1 || d < FLT_MIN)
	{
		std::cout << "smaller than int min" << std::endl;
	}
	else if (minmax == 1 || d > FLT_MAX)
	{
		std::cout << "bigger than int max" << std::endl;
	}
	else
	{
		if (isalpha(src[0]))
			i = static_cast<int>(src[0]);
		else
			i = static_cast<int>(d);
		std::cout << i << std::endl;
	}
		i = static_cast<int>(d);
	std::cout << "cast in int is: " << i << std::endl;
	f = static_cast<float>(d);
	std::cout << "cast in float is: " << f << std::endl;
	d = static_cast<double>(d);
	std::cout << "cast in double is: " << d << std::endl;
}
