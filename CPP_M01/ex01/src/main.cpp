/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:11:45 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/10 11:10:37 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void)
{
	int n = 6;
	Zombie *zombies = zombieHorde(n, "Guillaume");

	for (int i(0); i < n; ++i)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}
