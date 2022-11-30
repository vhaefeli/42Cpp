/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:31:19 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/30 13:47:16 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>

class Zombie {

	public:

		Zombie(std::string name = "");
		Zombie(const Zombie&);
		Zombie &operator=(const Zombie&);
		~Zombie( void );

		void	announce(void);

	private:

		std::string	_name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
