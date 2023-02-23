/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 16:09:00 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

t_MateriaList *AMateria::_MateriaList = NULL;

AMateria::AMateria()
	: _type("Magic")
{
	std::cout << this ;
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
	: _type(type)
{
	std::cout << this ;
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
		std::cout << "lst: " << lst << std::endl;
		lst = lst->next;
		std::cout << "lst: " << lst << std::endl;
	}
	std::cout << "***********lst:" << lst << std::endl;
	return (lst);
}
void AMateria::addToList(AMateria *newMateria)
{
	t_MateriaList	*newM = new(t_MateriaList);
	t_MateriaList	*lastel;

	if (!newM)
		return ;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "newM " << newM << std::endl;
	std::cout << "AMateria::_MateriaList " << AMateria::_MateriaList << std::endl;
	if (AMateria::_MateriaList == NULL)
	{
		std::cout << "ini materialist" << std::endl;
		AMateria::_MateriaList = newM;
		std::cout << "start " << AMateria::_MateriaList << std::endl;
		newM->theMateria = newMateria;
		newM->next = NULL;
	}
	else
	{
		std::cout << "start " << AMateria::_MateriaList << std::endl;
		newM->theMateria = newMateria;
		newM->next = NULL;
		lastel = ft_lstlast(AMateria::_MateriaList);
		std::cout << "***********lastel:" << lastel << std::endl;
		lastel->next = newM;
		std::cout << "***********lastel next:" << lastel->next << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
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
}

std::ostream &operator<<(std::ostream &o, const AMateria &uneInstance)
{
	o << uneInstance.getType();
	return (o);
}

