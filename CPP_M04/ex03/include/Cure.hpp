/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:43:02 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/23 16:10:06 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CURE_HPP
# define	CURE_HPP

#include <string>
#include <iostream>

//mother class
#include "AMateria.hpp"

class ICharacter;

class Cure : public virtual AMateria
{
	private:

	public:

		Cure();
		Cure(const Cure &d);
		Cure &operator=(const Cure &d);
		virtual ~Cure();

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif

