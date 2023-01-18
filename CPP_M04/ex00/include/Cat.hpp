/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 16:59:16 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <iostream>

#ifndef		CAT_HPP
# define	CAT_HPP

//mother class
#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

		Cat();
		Cat(const Cat &c);
		Cat &operator=(const Cat &c);
		virtual ~Cat();

		void makeSound() const;
};

#endif
