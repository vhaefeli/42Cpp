/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:31:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 18:56:48 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include "data.hpp"
#include <stdint.h>

class Serializer
{
	private:

		Serializer();
		Serializer(const Serializer &s);
		Serializer &operator=(const Serializer &s);

	public:
		uintptr_t	ptr;
		Data		*d;

		Serializer(int some_int, double some_double);
		~Serializer();

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

};

#endif
