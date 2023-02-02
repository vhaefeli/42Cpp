/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:35:38 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/02 11:32:31 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
// #include <string>
#include <stdlib.h>
// #include <sstream>
// #include <stdio.h>

int main(int argc, char **argv)
{
	ScalarConverter sc;

	if (argc != 2 || (atoi(argv[1]) == 0 && !argv[1][1]))
	{
		std::cout << "please put one and only one argument a character, a int, a float or a double" << std::endl;
		return 1;
	}

	sc.convert(argv[1]);
	return 0;
}
