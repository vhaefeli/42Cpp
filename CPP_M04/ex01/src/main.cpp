/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 14:20:59 by vhaefeli         ###   ########.fr       */
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
	const Animal* i = new Cat();
	Cat* c = new Cat();

	c->setIdea("mouse!", 1);
	std::cout << "the cat i has one idea: ";
	i->setIdea("mouse!", 1);
	std::cout << "the cat i has one idea: ";
	// i->getIdea(1);
	// std::cout << "the cat c has one idea: ";
	// c->getIdea(1);
	// c = i;
	// std::cout << "the cat c has one idea: ";
	// c->getIdea(1);
	// j->setIdea("cat!", 1);
	// std::cout << "the dog j has one idea: ";
	// j->getIdea(1);
	Dog d = Dog(*j);
	// std::cout << "the dog d has one idea: ";
	// d->getIdea(1);
	std::cout << "the " << j->getType() << " makes ";
	j->makeSound();
	std::cout << "the " << i->getType() << " makes ";
	i->makeSound();
	std::cout << "the " << meta->getType() << " makes ";
	meta->makeSound();
	std::cout << "the " << meta->getType() << " makes ";
	d.makeSound();
	std::cout << "the " << meta->getType() << " makes ";
	c->makeSound();


	delete meta;
	delete j;
	delete i;
	delete c;


	return 0;
}
