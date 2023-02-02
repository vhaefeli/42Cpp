/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:54:10 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/02 15:15:37 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	private:

		enum Source {
			UNKNOWN,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		};
		char		_c;
		int			_i;
		float		_f;
		double		_d;
		Source		_type;

		void checktype(const char *src);

	public:

		ScalarConverter();
		ScalarConverter(const ScalarConverter &sc);
		ScalarConverter &operator=(const ScalarConverter &sc);
		~ScalarConverter();

		void	convert(const char *src);
};

#endif
