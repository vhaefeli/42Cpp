/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:54:10 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/07 14:00:52 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	private:

	public:

		ScalarConverter();
		ScalarConverter(const ScalarConverter &sc);
		ScalarConverter &operator=(const ScalarConverter &sc);
		~ScalarConverter();

		static void	convert(const char *src);
};

#endif
