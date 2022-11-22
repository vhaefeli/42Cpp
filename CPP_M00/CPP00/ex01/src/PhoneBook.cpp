/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:57:41 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/22 16:24:39 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
: _next(0), _n(0)
{
}

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook(const PhoneBook& book)
{
	this->_next = book._next;
	for (int i(0); i < 8; i++)
		this->_contacts[i] = book._contacts[i];
}

std::string	PhoneBook::user_input(std::string prompt)
{
	std::string	user_input;

	do
	{
		std::cout << prompt;
		std::getline(std::cin, user_input);
	} while(user_input.empty());
	return (user_input);
}

int	PhoneBook::add_contact()
{
	std::string first, last, nick, phone, secret;

	std::cout << "Adding new contact." << std::endl;
	first = this->user_input("First name: ");
	last = this->user_input("Last name: ");
	nick = this->user_input("Nick name: ");
	phone = this->user_input("Phone: ");
	secret =this->user_input("Darkest secret: ");

	Contact c = Contact(first, last, nick, phone, secret);
	this->_contacts[this->_next] = c;
	this->_next = (this->_next + 1) % 8;
	this->_n = std::min(8, this->_n + 1);
	return (0);
}

static std::string trunc(std::string s)
{
	if (s.length() <= 10)
		return (s);
	return (s.substr(0, 9) + ".");
}

void PhoneBook::print_contacts(int i)
{
	std::cout << std::setw(16) << "First name: " << _contacts[i].getFirstName() << std::endl
		<< std::setw(16) << "Last name: " << _contacts[i].getLastName() << std::endl
		<< std::setw(16) << "Nick name: " << _contacts[i].getNickname() << std::endl
		<< std::setw(16) << "Phone number: " << _contacts[i].getPhoneNumber() << std::endl
		<< std::setw(16) << "Darkest secret: " << _contacts[i].getDarkestSecret() << std::endl;
}

void	PhoneBook::search_contact()
{
	std::string s;
	int	index;

	if (this->_n == 0)
	{
		std::cout << "No contacts yet." << std::endl;
		return ;
	}
	std::cout << "|index     |First     |Last      |Nick      |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i(0); i < 8; i++)
	{
		if (this->_contacts[i].getFirstName().empty())
			break ;
		std::cout << "|" << std::right << std::setw(10) << i + 1 << "|"
			<< std::right << std::setw(10) << trunc(_contacts[i].getFirstName()) << "|"
			<< std::right << std::setw(10) << trunc(_contacts[i].getLastName()) << "|"
			<< std::right << std::setw(10) << trunc(_contacts[i].getNickname()) << "|"
			<< std::endl;
	}
	do
	{
		s = this->user_input("index to show (0 to cancel): ");
		if (s.find_first_not_of("0123456789") == std::string::npos)
			std::stringstream(s) >> index;
	} while(index < 0 || index > this->_n);
	if (index > 0)
		this->print_contacts(index - 1);
}
