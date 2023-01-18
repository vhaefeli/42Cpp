/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:23:17 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/18 10:22:56 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		FRAGTRAP_HPP
# define	FRAGTRAP_HPP

//mother class
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:

	public:

		FragTrap();
		FragTrap(const std::string	name);
		FragTrap(const FragTrap &s);
		FragTrap &operator=(const FragTrap &s);
		~FragTrap();

		void highFivesGuys();
		void attack(const std::string& target);
};

#endif
