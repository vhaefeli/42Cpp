/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:12:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/11 13:29:56 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;
	int		level = 0;

	if (argc < 2) {std::cout << "minimum level needed" << std::endl;}

	while (level < 4)
	{
		std::cout <<"a" << level << std::endl;
		if (argv[1] == Harl::msgType[level])
		{
			break ;
		}
		level++;
	}
	while (level< 4)
	{
		std::cout << level << std::endl;
		harl.complain(Harl::msgType[level]);
		level++;
	}
	return (0);
}