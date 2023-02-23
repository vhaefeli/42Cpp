/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/22 14:09:24 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP
# define	ICE_HPP

#include <string>
#include <iostream>

//mother class
#include "AMateria.hpp"

class ICharacter;

class Ice : public virtual AMateria
{
	private:

	public:

		Ice();
		Ice(const Ice &d);
		Ice &operator=(const Ice &d);
		virtual ~Ice();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
