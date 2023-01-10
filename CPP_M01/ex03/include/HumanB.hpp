/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:31:19 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/10 15:32:22 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {
	public:

		HumanB(std::string name);

		void	attack();
		void	setWeapon(Weapon &w);

	private:

		std::string	name;
		Weapon		*weapon;
};

#endif
