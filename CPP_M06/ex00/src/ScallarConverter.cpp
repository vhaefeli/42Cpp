/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScallarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:31:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/07 14:00:50 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <float.h>
#include <string>

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

static int	checkFloat(std::string str)
{
	int comma = 0;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return 1;
	if (str.back() == 'f')
	{
		str.back() = '0';
		if (str.at(0) == '+' || str.at(0) == '-')
			str.at(0) = '0';
		for (unsigned long i = 0; i < str.length(); i++)
		{
			if (str.at(i) == '.')
			{
				if (comma == 0)
				{
					comma = 1;
					i++;
				}
				else
					return 0;
			}
			if (str.at(i) < 48 || str.at(i) > 57)
				return 0;
		}
		return 1;
	}
	return 0;
}

static int	checkInt(std::string str)
{
	if (str.at(0) == '+' || str.at(0) == '-')
		str.at(0) = '0';
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str.at(i) < 48 || str.at(i) > 57)
			return 0;
	}
	return 1;
}

static int	checkDouble(std::string str)
{
	int comma = 0;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return 1;
	if (str.at(0) == '+' || str.at(0) == '-')
		str.at(0) = '0';
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str.at(i) == '.')
		{
			if (comma == 0)
			{
				comma = 1;
				i++;
			}
			else
				return 0;
		}
		if (str.at(i) < 48 || str.at(i) > 57)
			return 0;
	}
	return 1;
}

void	ScalarConverter::convert(const char *src)
{
	enum Source {
			UNKNOWN,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};
	char	c;
	int		i;
	float	f;
	double	d;
	Source	type;
	std::string str;

	str = src;
	if (checkInt(str))
		type = INT;
	else if (checkFloat(str))
		type = FLOAT;
	else if (checkDouble(str))
		type = DOUBLE;
	else if (str.length() == 1)
		type = CHAR;
	else
		type = UNKNOWN;
	switch(type)
	{
		case UNKNOWN:
			std::cout << "please put one and only one argument a character, a int, a float or a double" << std::endl;
			return ;

		case CHAR:
			c = src[0];
			i = static_cast<int>(c);
			f = static_cast<float>(c);
			d = static_cast<double>(c);

		case INT:
			i = atoi(src);
			if (i > 32 && i < 127)
			{
				c = static_cast<char>(i);
			}
			else
				c = '0';
			f = static_cast<float>(i);
			d = static_cast<double>(i);

		case FLOAT:
			f = static_cast<float>(atof(src));
			if (f > 32 && f < 127)
			{
				c = static_cast<char>(f);
			}
			else
				c = '0';
			i = static_cast<int>(f);
			d = static_cast<double>(f);

		case DOUBLE:
			d = atof(src);
			if (d > 32 && d < 127)
			{
				c = static_cast<char>(d);
			}
			else
				c = '0';
			i = static_cast<int>(d);
			f = static_cast<float>(d);
	}
	std::cout << "cast in string is: ";
	if (c == '0')
			std::cout << "not defined" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "cast in int is: ";
	if (i == -2147483648 && str != "-2147483648")
			std::cout << "not defined" << std::endl;
	else
		std::cout << i << std::endl;
	std::cout << "cast in float is: " ;
	std::cout << f;
		if (f - i == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	std::cout << "cast in double is: ";
	std::cout << d;
		if (d - i == 0)
			std::cout << ".0" << std::endl;
}
