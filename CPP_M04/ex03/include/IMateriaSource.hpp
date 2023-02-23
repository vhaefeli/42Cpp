/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:11:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/22 13:02:32 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IMATERIASOURCE_HPP
# define	IMATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
	public:

		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
