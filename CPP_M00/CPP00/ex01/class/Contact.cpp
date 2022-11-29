/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:40 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/29 09:48:37 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	_NbDetails = 6;

std::string Contact::_fields[_NbDetails] = {
	"INDEX",
	"FIRST NAME",
	"LAST NAME",
	"NICKNAME",
	"PHONE NUMBER",
	"DARKEST SECRET"
};

Contact::Contact() {
	for (int i = 0; i < this->_NbDetails; i++) {
		this->_details[i] = std::string();
	}
	return;
}

 Contact::~Contact(void) {
	return;
}

bool	setContact(int index){
	this->detail[0] = std::to_string(index);
	std::cout << "# Please fill the following:" << std::endl;
	for (int i = 1; i < this->_NbDetails; i++) {
		if (!this->_details[i].empty())
			this->_details[i].clear();
		while (this->_details[i].empty()) {
			std::cout << "# " << this->_fields[i] << ":" << std::endl;
			std::cout << "> "
			std::getline(std::cin, this->_details[i]);
			if (this->_details[i].empty()) {
				std::cout << EC << "# Error: Empty field." << NC << std::endl;
			}
		}
	}
	std::cout << SC << "# Contact n°" << this->_index << " added to phonebook.\n" << std::endl;
	return (true);
}

std::string	SizeTenString(std::string str)
{
	for (int i = 0, str[i] && i < 9)
}

void	showContactSmall()
{

}