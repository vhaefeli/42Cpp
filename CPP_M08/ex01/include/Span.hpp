/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 09:41:10 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <list>

template <typename T>
class Span
{
	private:
		unsigned int	_maxSize;
		std::list<T>	_values;
		unsigned int	_inserted;

		Span();

	public:

		class FullException:public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class NotFoundException:public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class InvalidIndexException:public std::exception{
			public:
				virtual const char *what() const throw();
		};

		Span(unsigned int n);
		Span(const Span &rhs);
		Span &operator=(const Span &rhs);
		T	&operator[](unsigned int i);
		~Span();

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
};

#endif