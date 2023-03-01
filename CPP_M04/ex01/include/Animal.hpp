/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/01 11:02:34 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		ANIMAL_HPP
# define	ANIMAL_HPP

class Animal
{
	protected:

		std::string		_type;

	public:

		Animal();
		Animal(const std::string	type);
		Animal(const Animal &a);
		virtual Animal &operator=(const Animal &a);
		virtual ~Animal();

		virtual std::string getType() const;
		virtual void makeSound() const;

};

#endif

// children class:
// Cat
// Dog
