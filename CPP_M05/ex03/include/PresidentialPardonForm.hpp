/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:16 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/28 02:36:48 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public AForm
{
	private:
	
			const std::string	_target;
	public:

			PresidentialPardonForm();
			PresidentialPardonForm(const std::string &target);
			PresidentialPardonForm(const PresidentialPardonForm &f);
			PresidentialPardonForm &operator=(const PresidentialPardonForm &f);
			~PresidentialPardonForm();

			virtual void		doExecution() const;

};

#endif