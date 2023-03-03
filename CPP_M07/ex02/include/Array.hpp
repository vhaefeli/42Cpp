/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/03 11:31:59 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <string>

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T	*_values;

public:

	class InvalidIndexException:public std::exception{
		public:
			virtual const char *what() const throw(){
				return ("the index doesn't exist in this array");
			}
	};

	// Array(); => ne doit pas etre mis car cela fait doublon avec Array(unsigned int n = 0);
	// et le compilateur ne saura pas lequel utiliser.
	Array(unsigned int n = 0);
	Array(const Array<T> &rhs);
	Array &operator=(const Array &rhs);
	T	&operator[](unsigned int i);
	~Array();

	unsigned int	size();
};

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_values = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T> &rhs)
{
	this->_values = new T[0];
	*this = rhs;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
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
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw Array<T>::InvalidIndexException();
	else
		return (_values[i]);
}

template <typename T>
Array<T>::~Array()
{
	delete[] (this->_values); //on a fait un new sur un tableau donc il faut faire un delete[]!!!
}

template <typename T>
unsigned int Array<T>::size()
{
	return (this->_size);
}

template<class T>
std::ostream	&operator <<(std::ostream &os, const Array<T> &some_array)
{
	os << "{";
	if (some_array.size())
	{
		for(unsigned int i(0); i < some_array.size() - 1; i++)
			os << "'" << some_array[i] << "', ";
		os << "'" << some_array[some_array.size() - 1] << "'";
	}
	os << "}";
	return (os);
}


#endif
