/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:39:14 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 17:41:23 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	: _name("000"), _isSigned(0), _minGradeSignature(150), _minGradeExecution(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string name, int minGradeSignature, int minGradeExecution)
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
	std::cout << "Constructor called for " << _name << " Minimal Grade for Signature" << _minGradeSignature;
	std::cout << " Minimal Grade for Execution" << _minGradeExecution << std::endl;
}

Form::Form(const Form &f)
	: _name(f._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Form & Form::operator=(const Form &f)
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

Form::~Form()
{
	std::cout << "Form '" << _name << "' destructed" << std::endl;
}

const std::string Form::getName(void) const
{
	return (this->_name);
}

int Form::getMinGradeSignature(void) const
{
	return (this->_minGradeSignature);
}

int Form::getMinGradeExecution(void) const
{
	return (this->_minGradeExecution);
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_minGradeSignature)
	{
		if (this->_isSigned == 0)
			this->_isSigned = 1;
		else
			std::cout << "the form is already signed" << std::endl;
	}
	else
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& o, const Form &f)
{
	o << f.getName() << " Grade minimal to be allowed to signed the form :" << f.getMinGradeSignature()
	 << " Grade minimal to be allowed to exectute the form :" << f.getMinGradeExecution();
	return (o);
}

const char * Form::GradeTooHighException::what() const throw ()
{
	return ("grade is too hight.");
}

const char * Form::GradeTooLowException::what() const throw ()
{
	return ("grade is too low.");
}
