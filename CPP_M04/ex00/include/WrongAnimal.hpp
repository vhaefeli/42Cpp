/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 17:36:33 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		WRONGANIMAL_HPP
# define	WRONGANIMAL_HPP

class WrongAnimal
{
	protected:

		std::string		_type;

	public:

		WrongAnimal();
		WrongAnimal(const std::string	type);
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal &operator=(const WrongAnimal &a);
		virtual ~WrongAnimal();

		virtual std::string getType() const;
		virtual void makeSound() const;

};

#endif

// children class:
// Cat
// Dog
