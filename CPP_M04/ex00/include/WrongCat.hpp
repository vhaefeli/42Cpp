/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 17:36:46 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <iostream>

#ifndef		WRONGCAT_HPP
# define	WRONGCAT_HPP

//mother class
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(const WrongCat &c);
		WrongCat &operator=(const WrongCat &c);
		virtual ~WrongCat();

		void makeSound() const;
};

#endif
