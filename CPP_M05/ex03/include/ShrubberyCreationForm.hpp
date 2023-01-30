/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:34 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/30 15:10:49 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

//mother class
# include "AForm.hpp"

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
