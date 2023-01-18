/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 17:02:52 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "the " << j->getType() << " makes ";
	j->makeSound();
	std::cout << "the " << i->getType() << " makes ";
	i->makeSound(); //will output the cat sound!
	std::cout << "the " << meta->getType() << " makes ";
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	return 0;
}