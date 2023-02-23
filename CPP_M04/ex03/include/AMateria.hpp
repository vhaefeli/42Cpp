/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 18:03:38 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		AMATERIA_HPP
# define	AMATERIA_HPP

# include <string>
# include <iostream>
# include "Character.hpp"

class AMateria;

typedef struct s_MateriaList
{
	AMateria				*theMateria;
	struct s_MateriaList	*next;
}	t_MateriaList;

class ICharacter;

class AMateria
{
	private:

		static t_MateriaList *_MateriaList;

	protected:

		std::string	_type;

		static void addToList(AMateria *newMateria);


	public:

		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &mat);
		AMateria &operator=( const AMateria &rhs);
		virtual~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		static void deleteAllMateria();
		static void deleteOneMateria(AMateria *Materia);
};

std::ostream &operator<<(std::ostream &o, const AMateria &uneInstance);

#endif

