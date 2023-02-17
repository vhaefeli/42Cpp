/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:55:54 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/16 15:08:51 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

//mother class
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:

			std::string	_target;
	public:

			RobotomyRequestForm();
			RobotomyRequestForm(const std::string &target);
			RobotomyRequestForm(const RobotomyRequestForm &f);
			RobotomyRequestForm &operator=(const RobotomyRequestForm &f);
			~RobotomyRequestForm();

			virtual void		doExecution(void) const;
			std::string	getTarget(void) const;

};

#endif
