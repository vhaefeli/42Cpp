/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 02:00:51 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/30 13:28:09 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45), _target("FuturCyberman")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f)
	: AForm(f.getName(), 72, 45), _target(f._target)
{
	*this = f;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	(void)f;
	return (*this);
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Form '" << this->getName() << "' destructed" << std::endl;
}

void	RobotomyRequestForm::doExecution() const
{
	static int success = 0;

	if (success == 0)
		srand (time(NULL));

	success = std::rand();
	std::cout << "* Drzzzz Drzzzz *" << std::endl;
	if (success %2)
		std::cout << "Robotomy is a success. " << _target << " has been updated! [( •_• )]"  << std::endl;
	else
		std::cout << "Robotomy has failed. " << _target << " will be deleted." << std::endl;
}
