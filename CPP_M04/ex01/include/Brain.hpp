/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:46:58 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/19 15:59:27 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef		BRAIN_HPP
# define	BRAIN_HPP

class Brain
{
	private:

		std::string		_ideas [100];

	public:

		Brain();
		Brain(const std::string	type);
		Brain(const Brain &a);
		Brain &operator=(const Brain &a);
		virtual ~Brain();

		const std::string	getIdea(int i) const;
		void setIdea(const std::string &newidea, int j);

};

#endif
