/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:19:28 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 14:36:24 by vhaefeli         ###   ########.fr       */
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

	std::cout <<"****"<< std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "ice: "<< tmp << std::endl;
	me->equip(tmp);
	me->equip(tmp->clone());
	tmp = src->createMateria("bisous");
	std::cout << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	std::cout << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << tmp << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("ice");
	std::cout << tmp << std::endl;
	me->equip(tmp);
	me->unequip(0);


	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
