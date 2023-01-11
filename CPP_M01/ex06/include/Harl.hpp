/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:11:13 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/11 13:11:46 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
	private:

		static void (Harl::*_fcts[4])(void);

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		
		static std::string msgType[4];
		
		Harl();
		~Harl();

		void complain(std::string level);
};

#endif

