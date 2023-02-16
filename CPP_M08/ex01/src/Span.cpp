/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/13 23:50:09 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <string>



Span::Span()
Span::Span(unsigned int n);
Span::Span(const Span &rhs);
Span &Span::operator=(const Span &rhs);
Span::~Span();

void	Span::addNumber(int n);
int		Span::shortestSpan();
int		Span::longestSpan();


template <typename T>
Span<T>::Span()
{
	this->_size = 0;
	this->_values = new T[0]; 
}

template <typename T>
Span<T>::Span(unsigned int n)
{
	this->_size = n;
	this->_values = new T[n]; 
}

template <typename T>
Span<T>::~Span()
{
	delete (this->_values);
}

template <typename T>
Span<T>::Span(const Span<T> &rhs)
{
	this->_values = new T[0]; 
	*this = rhs;
}

template <typename T>
Span<T> &Span<T>::operator=(const Span<T> &rhs)
{
	if (this->_values)
		delete[] this->_values;
	this->_size = rhs._size;
	this->_values = new T[_size];
	for (unsigned int i = 0; i < _size; i++) {
		this->_values[i] = rhs._values[i];
	}
	return (*this);
}

template<class T>
T	&Span<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw Span<T>::InvalidIndexException();
	else
		return (_values[i]);
}

template <typename T>
unsigned int Span<T>::size()
{
	return (this->_size);
}

#endif