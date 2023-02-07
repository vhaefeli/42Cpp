/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:35:38 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/07 14:00:55 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "please put one and only one argument a character, a int, a float or a double" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);
	return 0;
}

