/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 14:14:20 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main( void )
{
	const AAnimal* j = new Dog();
	const AAnimal* k = new Cat();
	std::cout << std::endl;
	Cat i;
	std::cout << std::endl;
	i.getBrain().setIdea("mouse!", 1);
	std::cout << "the cat i has one idea: " << i.getBrain().getIdea(1) << std::endl;
	std::cout << std::endl;
	Cat c(i);
	std::cout << std::endl;
	std::cout << "the cat c has one idea: " << c.getBrain().getIdea(1) << std::endl;
	i.getBrain().setIdea("more mouse!", 2);
	std::cout << "the cat i has one idea: " << i.getBrain().getIdea(2) << std::endl;
	std::cout << "has cat c one idea more?: " << c.getBrain().getIdea(2) << std::endl;
	std::cout << std::endl;
	i = c;
	std::cout << std::endl;
	std::cout << "has the cat i has still 2 ideas: " << i.getBrain().getIdea(2) << std::endl;
	std::cout << std::endl;
	std::cout << "the " << i.getType() << " makes ";
	i.makeSound();
	std::cout << "the " << c.getType() << " makes ";
	c.makeSound();
	std::cout << "the " << j->getType() << " makes ";
	j->makeSound();
	std::cout << "the " << k->getType() << " makes ";
	k->makeSound();
	std::cout << std::endl;

	delete j;
	std::cout << std::endl;
	delete k;
	std::cout << std::endl;

	return 0;
}
