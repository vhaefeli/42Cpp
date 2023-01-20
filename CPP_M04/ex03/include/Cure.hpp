/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 10:22:56 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		DOG_HPP
# define	DOG_HPP

//mother class
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{
	private:

		Brain *_dogsBrain;

	public:

		Dog();
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);
		virtual ~Dog();

		void makeSound() const;

		Brain &getBrain();
};

#endif
