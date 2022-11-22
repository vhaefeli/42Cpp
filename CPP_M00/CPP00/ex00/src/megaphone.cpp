/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:57:41 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/21 15:08:38 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string StringToUpper(std::string str)
{
	for (std::string::iterator p = str.begin(); str.end() != p; ++p)
		*p = std::toupper(*p);
	return (str);
}

int main (int argc, char **argv){
	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < argc; i++)
			std::cout << StringToUpper(argv[i]);
	std::cout << std::endl;
	return (0);
	}
}