/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:50:26 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/09 15:56:03 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

int main ()
{
	int tab[] = {1, 3, 6, 8};
	std::string texte[] = {"hya", "so", "annoying"};

	::iter(tab, sizeof(tab) / sizeof(int), print_el);
	std::cout << std::endl;
	::iter(texte, sizeof(texte) / sizeof(std::string), print_el);
	std::cout << std::endl;
	::print_el(tab[1]);
	return 0;
}