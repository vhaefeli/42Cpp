/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:50:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/03 13:16:01 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int main ()
{
	Array<int>		nbr(4);
	Array<std::string> texte(3);
	Array<int>		*a = new Array<int>;
	// int * a = new int();
	for (unsigned int i = 0; i < nbr.size(); i++) {
			nbr[i] = 4 * i + 1;
		}

	Array<int>	nbr2(nbr);
	texte[0] = "my god ";
	texte[1] = "it's ";
	texte[2]= "so annoying!";
	std::cout << "nbr[1] = " << nbr[1] <<std::endl;
	std::cout << "nbr2[1] = " << nbr2[1] <<std::endl;
	nbr2[1] = 0;
	std::cout << "nbr[1] = " << nbr[1] <<std::endl;
	std::cout << "nbr2[1] = " << nbr2[1] <<std::endl;
	for (unsigned int i = 0; i < texte.size(); i++)
	{
		std::cout << "texte[" << i << "] = " << texte[i] <<std::endl;
	}
	try
	{
		std::cout << "texte[" << texte.size() << "] = " << texte[texte.size()] <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete a;
	return 0;
}
