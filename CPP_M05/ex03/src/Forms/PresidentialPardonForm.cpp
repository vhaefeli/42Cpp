/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:18:23 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/28 16:28:36 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25, 5), _target("MysteryForest")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f)
	: AForm(f.getName(), 25, 5), _target(f._target)
{
	*this = f;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	(void)f;
	return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Form '" << this->getName() << "' destructed" << std::endl;
}

void	PresidentialPardonForm::doExecution() const
{
		std::cout << _target << " just has been forgiven by the grat Zaphod Beeblebrox" << std::endl;
}	