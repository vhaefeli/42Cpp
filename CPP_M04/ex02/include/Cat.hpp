/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/01 10:23:45 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CAT_HPP
# define	CAT_HPP

# include <string>
# include <iostream>
//mother class
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : virtual public AAnimal
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
