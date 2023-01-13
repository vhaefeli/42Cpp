/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:21 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/12 22:44:21 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define	FIXED_HPP

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed &f);
		Fixed &operator=(const Fixed &f);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:

		const static int	_n_bits_frac = 8;
		int					_raw;

};

#endif