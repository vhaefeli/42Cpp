/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:11:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/22 13:50:02 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP


# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource: public IMateriaSource
{
	private:

		AMateria	*_materia[4];

	public:

		MateriaSource();
		MateriaSource(const MateriaSource &ms);
		MateriaSource &operator=(const MateriaSource &rhs);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
