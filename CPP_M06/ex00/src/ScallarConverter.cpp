/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScallarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:31:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/02 11:44:06 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
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
	if (d == 0 && src[0] != '0' && !src[1])
		d = static_cast<double>(src[0]);
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
		std::cout << "smaller than int min " << INT_MIN << std::endl;
	}
	else if (minmax == 1 || d > INT_MAX)
	{
		std::cout << "bigger than int max " << INT_MAX << std::endl;
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
	if (minmax == -1)
	{
		std::cout << "smaller than float min " << FLT_MIN << std::endl;
	}
	else if (minmax == 1 || d > FLT_MAX)
	{
		std::cout << "bigger than float max " << FLT_MAX << std::endl;
	}
	else
	{
		if (isalpha(src[0]))
			f = static_cast<float>(src[0]);
		else
			f = static_cast<float>(d);
		std::cout << f;
		if (f - i == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
// double
	std::cout << "cast in double is: ";
	if (minmax == -1)
	{
		std::cout << "smaller than double min" << DBL_MIN << std::endl;
	}
	else if (minmax == 1)
	{
		std::cout << "bigger than double max" << DBL_MAX << std::endl;
	}
	else
	{
		std::cout << d;
		if (d - i == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
}
