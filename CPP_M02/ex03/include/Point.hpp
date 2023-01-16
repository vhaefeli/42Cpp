/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:44:09 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/16 11:02:23 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Fixed.hpp"

#ifndef		POINT_HPP
# define	POINT_HPP

class Point
{
	public:

		Point();
		Point(const Fixed &x, const Fixed &y);
		Point(const Point &p);
		Point &operator=(const Point &p);
		~Point();

		Fixed	getX() const;
		Fixed	getY() const;

	private:

		Fixed	_x; // nepeuvent pas etre const sinon l'operateur = ne fonctionne pas
		Fixed	_y;

};

bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif
