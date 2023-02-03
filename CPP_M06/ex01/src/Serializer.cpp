/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:09:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 19:05:31 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(int some_int, double some_double)
{
	this->d = new(Data);
	this->d->some_int = some_int;
	this->d->some_double = some_double;
}

Serializer::~Serializer()
{
	delete(this->d);
}

Serializer::Serializer(const Serializer &s)
{
	*this = s;
}
Serializer &Serializer::operator=(const Serializer &s)
{
	if (this != &s)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}