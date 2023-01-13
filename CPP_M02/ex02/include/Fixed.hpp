/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:21 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 17:48:51 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>

#ifndef		FIXED_HPP
# define	FIXED_HPP

class Fixed
{
	public:

		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed &f);
		Fixed &operator=(const Fixed &f);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		float	toFloat(void) const; //l'instance sur laquelle on applique cette fonction est de toute facon envoyee en parametre!
		int		toInt(void) const;

		bool	operator>(const Fixed &f) const;
		bool	operator<(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;
		bool	operator<=(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		Fixed	operator+(const Fixed &f2) const;
		Fixed	operator-(const Fixed &f2) const;
		Fixed	operator*(const Fixed &f2) const;
		Fixed	operator/(const Fixed &f2) const;

		static Fixed	min(Fixed &f1, Fixed &f2);
		static Fixed	min(Fixed const &f1, Fixed const &f2);
		static Fixed	max(Fixed &f1, Fixed &f2);
		static Fixed	max(Fixed const &f1, Fixed const &f2);

	private:

		const static int	_n_bits_frac = 8;
		int					_raw;

};

std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif
