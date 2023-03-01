/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 00:46:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/28 15:55:16 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T tab[], int tab_size, void(*f)(T &))
{
	if (tab_size < 0)
		return ;
	for (int i(0); i < tab_size; i++)
	{
		f(tab[i]);
	}
}

template<typename T>
void	print_el(T &val)
{
	std::cout << "Element = " << val << std::endl;
}

#endif