/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:39:14 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/01 14:37:49 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
	: _name ("000"), _isSigned(0), _minGradeSignature(150), _minGradeExecution(150)
{
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, int minGradeSignature, int minGradeExecution)
	: _name (name), _isSigned(0), _minGradeSignature(minGradeSignature), _minGradeExecution(minGradeExecution)
{
	if (_minGradeSignature < 1 || _minGradeExecution < 1)
	{
		std::cout << " Grade must be between 1 (highest) and 150 (lowest)" << std::endl;
		throw GradeTooHighException();
	}
	if (_minGradeSignature > 150 || _minGradeExecution > 150)
	{
		std::cout << " Grade must be between 1 (highest) and 150 (lowest)" << std::endl;
		throw GradeTooLowException();
	}
	std::cout << "Constructor called for " << _name << " Minimal Grade for Signature: " << _minGradeSignature;
	std::cout << " Minimal Grade for Execution: " << _minGradeExecution << std::endl;
}

AForm::AForm(const AForm &f)
	: _name(f._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

AForm & AForm::operator=(const AForm &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->_isSigned = f._isSigned;
		this->_minGradeSignature = f._minGradeSignature;
		this->_minGradeExecution = f._minGradeExecution;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm '" << _name << "' destructed" << std::endl;
}

const std::string& AForm::getName(void) const
{
	return (this->_name);
}

int AForm::getMinGradeSignature(void) const
{
	return (this->_minGradeSignature);
}

int AForm::getMinGradeExecution(void) const
{
	return (this->_minGradeExecution);
}

bool AForm::getSignedStatus(void) const
{
	return (this->_isSigned);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->_minGradeSignature)
	{
		if (this->_isSigned == 0)
			this->_isSigned = 1;
		else
			throw FormAlreadySignedException();
	}
	else
		throw GradeTooLowException();
}

void	AForm::execute(const Bureaucrat &executor) const
{
	if (!_isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > this->_minGradeExecution)
		throw GradeTooLowException();
	doExecution();
}

std::ostream& operator<<(std::ostream& o, const AForm &f)
{
	o << f.getName() << " (Minimal Grade for Signature: " << f.getMinGradeSignature()
	 << " Minimal Grade for Execution: " << f.getMinGradeExecution() << ")";
	return (o);
}
