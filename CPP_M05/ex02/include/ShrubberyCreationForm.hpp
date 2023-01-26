/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:34 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/26 22:28:33 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

			virtual void		execute(Bureaucrat const & executor) const;

};

#endif