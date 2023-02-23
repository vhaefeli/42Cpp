/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/22 13:28:32 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:

		std::string	_name;
		AMateria	*_materia[4];

		Character();


	public:

		Character(std:: string name);
		Character(const Character &buddy);
		Character &operator=(const Character &rhs);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

std::ostream &operator<<(std::ostream &o, const Character &uneInstance);

#endif
