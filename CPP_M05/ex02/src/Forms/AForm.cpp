/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:39:14 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/26 21:47:10 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AFrom.hpp"
#include "Bureaucrat.hpp"

AFrom::AFrom()
	: _name ("000"), _isSigned(0), _minGradeSignature(150), _minGradeExecution(150)
{
	std::cout << "AFrom Default constructor called" << std::endl;
}

AFrom::AFrom(const std::string name, int minGradeSignature, int minGradeExecution)
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

AFrom::AFrom(const AFrom &f)
	: _name(f._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

AFrom & AFrom::operator=(const AFrom &f)
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

AFrom::~AFrom()
{
	std::cout << "AFrom '" << _name << "' destructed" << std::endl;
}

const std::string AFrom::getName(void) const
{
	return (this->_name);
}

int AFrom::getMinGradeSignature(void) const
{
	return (this->_minGradeSignature);
}

int AFrom::getMinGradeExecution(void) const
{
	return (this->_minGradeExecution);
}

void	AFrom::beSigned(Bureaucrat &b)
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


std::ostream& operator<<(std::ostream& o, const AFrom &f)
{
	o << f.getName() << " Grade minimal to be allowed to signed the form :" << f.getMinGradeSignature()
	 << " Grade minimal to be allowed to exectute the form :" << f.getMinGradeExecution();
	return (o);
}

const char * AFrom::GradeTooHighException::what() const throw ()
{
	return ("grade is too hight.");
}

const char * AFrom::GradeTooLowException::what() const throw ()
{
	return ("grade is too low.");
}
