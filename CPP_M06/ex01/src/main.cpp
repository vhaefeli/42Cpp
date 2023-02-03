/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:32:48 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 14:27:28 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Serializer	s;
	Data		data;

	data.some_int = 42;
	data.some_double = 42.42;
	data.some_float = 42.21f;
	data.some_string = "Hello";

	std::cout <<"data ptr: " << &data << std::endl;
	s.ptr = s.serialize(&data);
	std::cout <<"serialize data ptr:" << s.ptr << std::endl;
	s.d = s.deserialize(s.ptr);
	std::cout <<"deserialize :" << s.d << std::endl;
}
