/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 22:24:50 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 22:32:31 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int	main()
{
	Base *obj;

	srand (time(NULL));
	for (size_t i = 0; i < 10; i++)
	{
		obj = generate();
		identify(obj);
		identify(*obj);
		delete obj;
		std::cout << std::endl;
	}
	return 0;
}