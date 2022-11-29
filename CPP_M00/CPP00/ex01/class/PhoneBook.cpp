/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:57:41 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/29 11:40:52 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
: _nContacts(0),_n(0)
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::addContact()
{
	if (this->_n == MAX_CONTACTS) {
		this->_n = 0;
	}
	if (this->_nContacts == MAX_CONTACTS) {
		this->_nContacts = MAX_CONTACTS - 1;
	}
	if (this->_contacts[this->_n].setContact(this->_n + 1)) {
		this->_n++;
		this->_nContacts++;
	}
	return (0);
}

void    PhoneBook::_printPhoneBook() {
	for (int i = 0; i < _nContacts ; ++i) {
		if (i == 0)
			this->_contacts[i].showHeader();
		this->_contacts[i].showContactSmall();
	}
}

void	PhoneBook::searchContact() {
	int			index;
	std::string	input;

	if (this->_nContacts == 0) {
		std::cout << "Phonebook is empty, please use " << ADD << std::endl;
		return;
	}
	this->_printPhoneBook();
	std::cout << "\n# Please enter the index of the contact you want to see:" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] >= '1' && input[0] <= '8') {
		index = input[0] - '0';
		if (index <= this->_nContacts) {
			this->_contacts[index - 1].showContactFull();
		} else {
			std::cout << "\nContact not found." << std::endl;
		}
	} else {
		std::cout << "\nInvalid index."  << std::endl;
	}
	return;
}
