/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 15:35:07 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <iostream>

#ifndef		CAT_HPP
# define	CAT_HPP

//mother class
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:

		Brain *_catsBrain;

	public:

		Cat();
		Cat(const Cat &c);
		Cat &operator=(const Cat &c);
		virtual ~Cat();

		void makeSound() const;

		Brain &getBrain();
};

#endif
