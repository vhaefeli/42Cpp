/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:25:06 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/25 12:20:14 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: _name ("John Do"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: _name (name), _grade(grade)
{
	std::cout << "Constructor called for " << _name << std::endl;
	if (_grade < Bureaucrat::maxGrade )
		throw GradeTooHighException();
	if (_grade > Bureaucrat::minGrade )
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
	{
		this->_grade = b._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat '" << _name << "' destructed" << std::endl;
}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::promote()
{
	if (_grade > maxGrade)
		_grade--;
	else
		throw GradeTooHighException();
}

void	Bureaucrat::demote()
{
	if (_grade < minGrade)
		_grade++;
	else
		throw GradeTooLowException();
}

void		Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << *this << " signed " << f <<std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cout << *this << " couldn't sign " << f << " because ";
		std::cout << e.what() << std::endl;
	}

}

std::ostream& operator<<(std::ostream& o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("grade is too hight.");
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
	return ("grade is too low.");
}
