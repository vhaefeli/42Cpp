/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 17:01:26 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	Cat *i = new Cat();

	i->getBrain().setIdea("mouse!", 1);
	std::cout << "the cat i has one idea: " << i->getBrain().getIdea(1) << std::endl;
	Cat c(*i);
	std::cout << "the cat c has one idea: " << c.getBrain().getIdea(1) << std::endl;
	i->getBrain().setIdea("more mouse!", 2);
	std::cout << "the cat i has one idea: " << i->getBrain().getIdea(2) << std::endl;
	std::cout << "has cat c one idea more: " << c.getBrain().getIdea(2) << std::endl;
	std::cout << "the " << j->getType() << " makes ";
	j->makeSound();
	std::cout << "the " << i->getType() << " makes ";
	i->makeSound();
	std::cout << "the " << meta->getType() << " makes ";
	meta->makeSound();
	std::cout << "the " << c.getType() << " makes ";
	c.makeSound();


	delete meta;
	delete j;
	delete i;
	delete k;


	return 0;
}
