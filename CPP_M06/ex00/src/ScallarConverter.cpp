/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScallarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:31:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/02 15:46:48 by vhaefeli         ###   ########.fr       */
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

void ScalarConverter::checktype(const char *src)
{
	std::string str;

	str = src;
	if (checkInt(str))
		this->_type = INT;
	else if (checkFloat(str))
		this->_type = FLOAT;
	else if (checkDouble(str))
		this->_type = DOUBLE;
	else if (str.length() == 1)
		this->_type = CHAR;
	else
		this->_type = UNKNOWN;

}

void	ScalarConverter::convert(const char *src)
{
	std::string str;
	str = src;
	this->checktype(src);
	switch(_type)
	{
		case UNKNOWN:
			std::cout << "please put one and only one argument a character, a int, a float or a double" << std::endl;
			return ;

		case CHAR:
			this->_c = src[0];
			this->_i = static_cast<int>(this->_c);
			this->_f = static_cast<float>(this->_c);
			this->_d = static_cast<double>(this->_c);

		case INT:
			this->_i = atoi(src);
			if (this->_i > 32 && this->_i < 127)
			{
				this->_c = static_cast<char>(this->_i);
			}
			else
				this->_c = '0';
			this->_f = static_cast<float>(this->_i);
			this->_d = static_cast<double>(this->_i);

		case FLOAT:
			this->_f = static_cast<float>(atof(src));
			if (this->_f > 32 && this->_f < 127)
			{
				this->_c = static_cast<char>(this->_f);
			}
			else
				this->_c = '0';
			this->_i = static_cast<int>(this->_f);
			this->_d = static_cast<double>(this->_f);

		case DOUBLE:
			this->_d = atof(src);
			if (this->_d > 32 && this->_d < 127)
			{
				this->_c = static_cast<char>(this->_d);
			}
			else
				this->_c = '0';
			this->_i = static_cast<int>(this->_d);
			this->_f = static_cast<float>(this->_d);
	}
	std::cout << "cast in string is: ";
	if (this->_c == '0')
			std::cout << "not defined" << std::endl;
	else
		std::cout << this->_c << std::endl;
	std::cout << "cast in int is: ";
	if (this->_i == -2147483648 && str != "-2147483648")
			std::cout << "not defined" << std::endl;
	else
		std::cout << this->_i << std::endl;
	std::cout << "cast in float is: " ;
	std::cout << this->_f;
		if (this->_f - this->_i == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	std::cout << "cast in double is: ";
	std::cout << this->_d;
		if (this->_d - this->_i == 0)
			std::cout << ".0" << std::endl;
}
