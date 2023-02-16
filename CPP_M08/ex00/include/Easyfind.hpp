/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/13 18:26:43 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <string>
# include <vector>
# include <algorithm>

class NotFoundException : public std::exception
{
	public :
	virtual const char * what() const throw()
	{
		return ("object not found");
	}
};

template <typename T>
typename T::iterator easyfind(T &x, int y)
{
	typename T::iterator it = find(x.begin(), x.end(), y);
	
	if (it != x.end())
	{
		std::cout << "The first value is found" << std::endl;
		return it;
	}
	throw NotFoundException();
}

#endif
