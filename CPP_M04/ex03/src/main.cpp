/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 11:11:48 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	Character john("john");

	std::cout << std::endl << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << std::endl << std::endl;
	me->equip(tmp);
	std::cout << std::endl << std::endl;
	me->equip(tmp->clone());
	std::cout << std::endl << std::endl;
	tmp = src->createMateria("bisous");
	me->equip(tmp);
	std::cout << std::endl << std::endl;
	tmp = src->createMateria("cure");

	john.equip(tmp);
	std::cout << std::endl << std::endl;

	Character john_twin(john);
	std::cout << std::endl << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << std::endl << std::endl;
	me->unequip(0);
	std::cout << std::endl << std::endl;

	ICharacter* bob = new Character("bob");
	std::cout << std::endl << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	john.use(0, *bob);

	std::cout << std::endl << "************ THE END ***********" << std::endl << std::endl;


	delete bob;
	delete me;
	delete src;
	std::cout << "****" << std::endl;
	AMateria::deleteAllMateria();
	std::cout << "****" << std::endl;
	return 0;
}
