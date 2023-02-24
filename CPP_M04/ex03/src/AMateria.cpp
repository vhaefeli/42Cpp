/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 11:12:28 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

t_MateriaList *AMateria::_MateriaList = NULL;

AMateria::AMateria()
	: _type("Magic")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
	: _type(type)
{
	std::cout << "AMateria Constructor called for a new " << _type << std::endl;
}

AMateria::AMateria(const AMateria &mat)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = mat;
}

AMateria & AMateria::operator=(const AMateria &rhs)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria '" << _type << "' destructed" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* do something to " << target.getName() << " *" << std::endl;
}

static t_MateriaList	*ft_lstlast(t_MateriaList *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
void AMateria::addToList(AMateria *newMateria)
{
	t_MateriaList	*newM = new(t_MateriaList);
	t_MateriaList	*lastel;

	if (!newM)
		return ;
	if (AMateria::_MateriaList == NULL)
	{
		AMateria::_MateriaList = newM;
		newM->theMateria = newMateria;
		newM->next = NULL;
	}
	else
	{
		newM->theMateria = newMateria;
		newM->next = NULL;
		lastel = ft_lstlast(AMateria::_MateriaList);
		lastel->next = newM;
	}
}

void AMateria::deleteAllMateria()
{
	t_MateriaList	*temp;
	t_MateriaList	*temp2;

	temp = AMateria::_MateriaList;
	while (temp->next)
	{
		temp2 = temp;
		if (temp->theMateria)
		{
			delete(temp->theMateria);
			temp->theMateria = NULL;
		}
		temp = temp->next;
		delete(temp2);
		temp2 = NULL;
	}
	if (temp->theMateria)
	{
		delete(temp->theMateria);
		temp->theMateria = NULL;
	}
	delete(temp);
	temp = NULL;
	AMateria::_MateriaList = NULL;
}

 void AMateria::deleteOneMateria(AMateria *Materia)
 {
	t_MateriaList	*temp;

	if (AMateria::_MateriaList)
	{
		temp = AMateria::_MateriaList;
		while (temp->next)
		{
			if (temp->theMateria && temp->theMateria == Materia)
			{
				delete(temp->theMateria);
				temp->theMateria = NULL;
			}
			temp = temp->next;
		}
		if (temp->theMateria && temp->theMateria == Materia)
		{
			delete(temp->theMateria);
			temp->theMateria = NULL;
		}
	}
 }

std::ostream &operator<<(std::ostream &o, const AMateria &uneInstance)
{
	o << uneInstance.getType();
	return (o);
}

