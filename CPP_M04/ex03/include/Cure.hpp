/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:43:02 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/21 21:00:54 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		CURE_HPP
# define	CURE_HPP

//mother class
#include "AMateria.hpp"

class Cure : public virtual AMateria
{
	private:

	public:

		Cure();
		Cure(const Cure &d);
		Cure &operator=(const Cure &d);
		virtual ~Cure();

		virtual AMateria* clone() const;

};

#endif
