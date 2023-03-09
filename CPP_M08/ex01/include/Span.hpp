/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/08 15:17:48 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <vector>

class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_values;
		unsigned int		_inserted;

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

		class NotEnoughNbr:public std::exception{
			public:
				virtual const char *what() const throw();
		};

		class tooMuchNbr:public std::exception{
			public:
				virtual const char *what() const throw();
		};

		Span(unsigned int n);
		Span(const Span &rhs);
		Span &operator=(const Span &rhs);
		~Span();

		void	addNumber(int n);
		void	addRandom(int n);
		int		shortestSpan();
		int		longestSpan();
		void	printNbrs();
};

#endif
