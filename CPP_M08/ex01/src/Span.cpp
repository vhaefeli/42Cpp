/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 09:41:05 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename T>
Span<T>::Span()
{
	this->_size = 0;
	this->_inserted = 0;
	this->_values = new T[0]; 
}

template <typename T>
Span<T>::Span(unsigned int n)
{
	this->_size = n;
	this->_inserted = 0;
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
	if (if i < 0 || i >= this->_size)
		throw Span<T>::InvalidIndexException();
	if (if i >= this->_inserted)
		throw Span<T>::NotFoundException
	else
		return (_values[i]);
}

template <typename T>
unsigned int Span<T>::size()
{
	return (this->_size);
}

const char *Span<T>::FullException::what() const throw()
{
	return ("list already full");
}

const char *Span<T>::NotFoundException::what() const throw()
{
	return ("not defined: not enough numbers");
}

const char *Span<T>::InvalidIndexException::what() const throw()
{
	return ("invalid index");
}