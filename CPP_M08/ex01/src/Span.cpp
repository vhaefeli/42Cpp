/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 15:32:51 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	:_maxSize(0), _inserted(0)
{
}

Span::Span(unsigned int n)
	:_maxSize(n), _inserted(0)
{
}

Span::~Span()
{
}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span &Span::operator=(const Span &rhs)
{
	this->_maxSize = rhs._maxSize;
	this->_inserted = rhs._inserted;
	for (int i(0); i < this->_inserted; i++)
	{
		this->_values[i] = rhs._values[i];
	}
	return (*this);
}


void	Span::addNumber(int n)
{
	if ( this->_inserted < this->_maxSize)
	{
		this->_values.push_back(n);
		this->_inserted++;
	}
	else
		throw Span::FullException();
}

void	Span::addRandom(int n)
{
	static int num = 0;
	if ((this->_inserted + n) > this->_maxSize)
	{
		throw Span::tooMuchNbr();
	}
	else
	{
		for (int i(0); i < n; i++)
		{
			if (num == 0)
				srand(time(NULL));
			num = std::rand() % 1000;
			Span::addNumber(num);
		}
	}
}

void	Span::printNbrs()
{
	for (int i(0); i < this->_inserted; i++)
	{
		std::cout << " * " << this->_values[i];
	}
	std::cout << " * " << std::endl;
}

int	Span::shortestSpan()
{
	int shortestSpan;

	if (this->_inserted < 2)
		throw Span::NotEnoughNbr();
	std::sort(this->_values.begin(), this->_values.begin() + this->_inserted);
	shortestSpan = (this->_values[1] - this->_values[0]);
	for (int i(1); i < (this->_inserted - 1) ; i++)
	{
		int	diff;

		diff = (this->_values[i + 1] - this->_values[i]);
		if (diff < shortestSpan)
			shortestSpan = diff;
		if (shortestSpan == 0)
			break;
	}
	return (shortestSpan);
}

int		Span::longestSpan()
{
	int	ls;

	if (this->_inserted < 2)
		throw Span::NotEnoughNbr();
	std::sort(this->_values.begin(), this->_values.begin() + this->_inserted);
	ls = this->_values[this->_inserted - 1] - this->_values[0];
	return (ls);
}

const char *Span::FullException::what() const throw()
{
	return ("*list already full*");
}

const char *Span::NotFoundException::what() const throw()
{
	return ("*not defined: not enough numbers*");
}

const char *Span::InvalidIndexException::what() const throw()
{
	return ("*invalid index*");
}

const char *Span::NotEnoughNbr::what() const throw()
{
	return ("*not enough numbers to compare (min 2)*");
}

const char *Span::tooMuchNbr::what() const throw()
{
	return ("*too much numbers to insert*");
}
