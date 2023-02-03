/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:32:48 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 19:05:06 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Serializer	s(42, 21.21);

	std::cout <<"data int: " << s.d->some_int << std::endl;
	std::cout <<"data double: " << s.d->some_double << std::endl;
	std::cout <<"data ptr: " << s.d << std::endl;
	s.ptr = s.serialize(s.d);
	std::cout <<"serialize data ptr:" << s.ptr << std::endl;
	s.d = s.deserialize(s.ptr);
	std::cout <<"deserialize :" << s.d << std::endl;
}
