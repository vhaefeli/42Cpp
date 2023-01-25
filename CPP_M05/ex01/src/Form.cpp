/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:39:14 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/25 09:21:34 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: _name ("000"), _grade(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string name, int minGradeSignature, int minGradeExecution)
	: _name (name), _minGradeSignature(minGradeSignature), _minGradeExecution(minGradeExecution), _isSigned(0)
{
	std::cout << "Constructor called for " << _name << " Minimal Grade for Signature" << _minGradeSignature;
	std::cout << " Minimal Grade for Execution" << _minGradeExecution << std::endl;

}

Form::Form(const Form &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = friend;
}

Form & Form::operator=(const Form &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
	{
		this->_name =f._name;
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

void	Form::beSigned(bureaucrat &b)
{
	if (b.GetGrade <= this->_minGradeSignature)
	{
		if 		this->_isSigned == 0
		{
			this->_isSigned = 1;
			std::cout << b.getName << " signed " << this->_name << "." << std::endl;
		else
			std::cout << "the form is already signed" << std::endl;
	}
	else
	
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& o, const Form &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}

const char * Form::GradeTooHighException::what() const throw ()
{
	return ("grade is too hight.");
}

const char * Form::GradeTooLowException::what() const throw ()
{
	return ("his grade is too low to be allowed to signed this form.");
}
