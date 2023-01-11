/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:11:13 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/11 16:56:46 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
	private:

		static std::string _msgType[4];
		
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);

	public:
		

		
		Harl();
		~Harl();

		void complain(std::string level);
};

#endif

