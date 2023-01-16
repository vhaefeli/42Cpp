/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/16 11:02:32 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(500), Fixed(0));
	Point c(Fixed(500), Fixed(500));
	Point p(Fixed(-300), Fixed(195.4f));

	Fixed x, y;

	x = a.getX(); y = a.getY();
	std::cout << "A = (" << x << "," << y << ")" << std::endl;
	x = b.getX(); y = b.getY();
	std::cout << "B = (" << x << "," << y << ")" << std::endl;
	x = c.getX(); y = c.getY();
	std::cout << "C = (" << x << "," << y << ")" << std::endl;
	x = p.getX(); y = p.getY();
	std::cout << "P = (" << x << "," << y << ")" << std::endl;
	if (bsp(a, b, c, p))
		std::cout << "P is in triangle ABC" << std::endl;
	else
		std::cout << "P is NOT in triangle ABC" << std::endl;
	return (0);
}
