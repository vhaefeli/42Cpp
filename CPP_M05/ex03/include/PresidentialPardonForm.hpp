/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:16 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/30 15:10:58 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

//mother class
# include "AForm.hpp"

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
