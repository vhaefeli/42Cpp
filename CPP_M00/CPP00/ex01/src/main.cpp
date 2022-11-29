/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:23:01 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/29 11:20:52 by vhaefeli         ###   ########.fr       */
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
			book.addContact();
		else if (!user_input.compare("SEARCH"))
			book.searchContact();
		else if (!user_input.compare("EXIT"))
			break ;
		else
		{
			std::cout << "Please use one of the following commands:" << std::endl;
			std::cout << ADD << std::endl << SEARCH << std::endl << EXIT << std::endl;
		}
	}
	return (0);
}
