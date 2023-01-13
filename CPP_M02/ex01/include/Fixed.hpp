/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:21 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/13 09:01:21 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>

#ifndef		FIXED_HPP
# define	FIXED_HPP

class Fixed
{
	public:

		Fixed();
		Fixed(int const raw);
		Fixed(float const raw);
		Fixed(const Fixed &f);
		Fixed &operator=(const Fixed &f);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		const static int	_n_bits_frac = 8;
		int					_raw;

};

std::ostream& operator<<(std::ostream& os, const Fixed &f);

#endif