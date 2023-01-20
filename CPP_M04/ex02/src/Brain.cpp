/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 10:38:25 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i(0); i < 100; ++i)
		this->_ideas[i] = "only void";
	std::cout << "Brain Default constructor called" << std::endl;
	std::cout << "Brain ad: " << this << std::endl;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	std::cout << "Brain ad: " << this << std::endl;
	*this = b;
}

Brain & Brain::operator=(const Brain &b)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		for (int i(0); i < 100; ++i)
		this->_ideas[i] = b._ideas[i];
	}
	std::cout << "Brain ad: " << this << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "destruct Brain ad: " << this << std::endl;
	std::cout << "Brain destructed" << std::endl;
}

void Brain::setIdea(const std::string &newidea, int j)
{
	if (j < 0 || j >= 100)
	{
		std::cout << "Brain isn't big choose between 0 to 99" << std::endl;
		return ;
	}
	this->_ideas[j] = newidea;
}


const std::string	Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Brain isn't big choose between 0 to 99" << std::endl;
		return "";
	}
	return (this->_ideas[i]);
}
