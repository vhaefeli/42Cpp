/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:23:01 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/22 16:24:22 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	book;

	std::string user_input;
	while (!std::cin.eof())
	{
		std::cout << "> ";
		std::getline(std::cin, user_input);
		if (!user_input.compare("ADD"))
			book.add_contact();
		else if (!user_input.compare("SEARCH"))
			book.search_contact();
		else if (!user_input.compare("EXIT"))
			break ;
	}
	return (0);
}
