/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:32:48 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/07 14:14:59 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Data	d;
	Data	*ptr;
	uintptr_t intptr;

	d.some_double = 21.21;
	d.some_int = 42;
	ptr = &d;

	std::cout <<"data ptr: " << ptr << std::endl;
	intptr = Serializer::serialize(ptr);
	std::cout <<"serialize data ptr:" << intptr << std::endl;
	std::cout <<"deserialize :" << Serializer::deserialize(intptr) << std::endl;
}
