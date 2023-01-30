/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:34 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/28 01:39:48 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

class ShrubberyCreationForm : public AForm
{
	private:
	
			const std::string	_target;
	public:

			ShrubberyCreationForm();
			ShrubberyCreationForm(const std::string &target);
			ShrubberyCreationForm(const ShrubberyCreationForm &f);
			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &f);
			~ShrubberyCreationForm();

			virtual void		doExecution() const;

};

#endif