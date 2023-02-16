/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/13 19:05:00 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <list>

class Span
{
private:
	unsigned int	_size;
	std::list<int> _numbers;

	Span();

public:

	class FullException:public std::exception{
		public:
			virtual const char *what() const throw(){
				return ("list already full");
			}
	};

	class NotFoundException:public std::exception{
		public:
			virtual const char *what() const throw(){
				return ("not defined: not enough numbers");
			}
	};

	Span(unsigned int n);
	Span(const Span &rhs);
	Span &operator=(const Span &rhs);
	~Span();

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
};

#endif