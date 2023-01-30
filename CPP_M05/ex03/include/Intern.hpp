/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:17:10 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/30 11:28:52 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

class AForm;

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &i);
		Intern &operator=(const Intern &i);
		~Intern();

		AForm *makeForm(std::string formType, std::string target);
};

 #endif
