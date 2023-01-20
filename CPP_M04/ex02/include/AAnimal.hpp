/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/20 14:14:35 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

#ifndef		AANIMAL_HPP
# define	AANIMAL_HPP

class AAnimal
{
	protected:

		std::string		_type;
		// Brain			*_brain;

	public:

		AAnimal();
		AAnimal(const std::string	type);
		AAnimal(const AAnimal &a);
		virtual AAnimal &operator=(const AAnimal &a);
		virtual ~AAnimal();

		virtual std::string getType() const;
		virtual void makeSound() const = 0;
		virtual Brain &getBrain() = 0;

};

#endif

// children class:
// Cat
// Dog
