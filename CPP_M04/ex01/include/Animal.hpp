/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 15:32:45 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

#ifndef		ANIMAL_HPP
# define	ANIMAL_HPP

class Animal
{
	protected:

		std::string		_type;
		Brain			*_brain;

	public:

		Animal();
		Animal(const std::string	type);
		Animal(const Animal &a);
		virtual Animal &operator=(const Animal &a);
		virtual ~Animal();

		virtual std::string getType() const;
		virtual void makeSound() const;
		virtual Brain &getBrain();

};

#endif

// children class:
// Cat
// Dog
