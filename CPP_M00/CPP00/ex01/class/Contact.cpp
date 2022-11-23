/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:40 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/23 11:08:09 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"



Contact::Contact() :
	first_name(""),
	last_name(""),
	nickname(""),
	phone_number(""),
	darkest_secret("")
{
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string ph,
		std::string ds) :
	first_name(fn),
	last_name(ln),
	nickname(nn),
	phone_number(ph),
	darkest_secret(ds)
{
}

Contact &Contact::operator=(const Contact& c)
{
	this->first_name = c.first_name;
	this->last_name = c.last_name;
	this->nickname = c.nickname;
	this->phone_number = c.phone_number;
	this->darkest_secret = c.darkest_secret;
	return (*this);
}

Contact::~Contact()
{
}


std::string Contact::getFirstName() const{
	return this->first_name;
}

std::string Contact::getLastName() const{
	return this->last_name;
}

std::string Contact::getNickname() const{
	return this->nickname;
}

std::string Contact::getPhoneNumber() const{
	return this->phone_number;
}

std::string Contact::getDarkestSecret() const{
	return this->darkest_secret;
}
