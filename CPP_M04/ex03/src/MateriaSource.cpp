/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:15:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 19:09:13 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i(0); i < 4 ; i++)
	{
		_materia[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	for (int i(0); i < 4 ; i++)
	{
		this->_materia[i] = ms._materia[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i(0); i < 4 ; i++)
		{
			this->_materia[i] = rhs._materia[i];
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructed" << std::endl;
}


void MateriaSource::learnMateria(AMateria* m)
{
	for (int i(0); i < 4 ; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			std::cout << "Materia " << m->getType() << " put on place " << i << std::endl;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i(0); i < 4 ; i++)
	{
		if (this->_materia[i] && (this->_materia[i])->getType() == type)
		{
			if (type == "cure")
			{
				return (new Cure());
			}
			if (type == "ice")
			{
				return (new Ice());
			}
		}
	}
	std::cout << "Materia " << type << " hasn't been learned yet." << std::endl;
	return NULL;
}

