/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 17:39:00 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include <iostream>

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal * extr = new WrongCat();

	std::cout << "the " << j->getType() << " makes ";
	j->makeSound();
	std::cout << "the " << i->getType() << " makes ";
	i->makeSound();
	std::cout << "the " << meta->getType() << " makes ";
	meta->makeSound();
	std::cout << "the " << extr->getType() << " makes ";
	extr->makeSound();

	delete meta;
	delete j;
	delete i;
	delete extr;

	return 0;
}
