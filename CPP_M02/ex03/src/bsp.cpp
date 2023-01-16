/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:52:45 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/14 13:24:44 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include <iostream>

/* Using Barycentric coordinate system:
 * https://en.wikipedia.org/wiki/Barycentric_coordinate_system
 * */
bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed Area = Fixed(0.5f) * (a.getY()*(c.getX() - b.getX()) + a.getX()*(b.getY() - c.getY()) + b.getX()*c.getY() - b.getY()*c.getX());
	Fixed lambda1 = (a.getY()*c.getX() - a.getX()*c.getY() + (c.getY() - a.getY())*point.getX() + (a.getX() - c.getX())*point.getY()) / Fixed(2) / Area;
	Fixed lambda2 = (a.getX()*b.getY() - a.getY()*b.getX() + (a.getY() - b.getY())*point.getX() + (b.getX() - a.getX())*point.getY()) / Fixed(2) / Area;
	Fixed lambda3 = Fixed(1) - lambda1 - lambda2;
	if (lambda1 <= Fixed(0.0f) || lambda1 >= Fixed(1.0f))
		return (false);
	if (lambda2 <= Fixed(0.0f) || lambda2 >= Fixed(1.0f))
		return (false);
	if (lambda3 <= Fixed(0.0f) || lambda3 >= Fixed(1.0f))
		return (false);
	return true;
}