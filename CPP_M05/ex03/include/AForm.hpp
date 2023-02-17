/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:20:12 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/16 14:22:43 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef AFORM_HPP
# define	AFORM_HPP

class Bureaucrat;

class AForm
{
	private:

		const std::string	_name;
		bool				_isSigned;
		int					_minGradeSignature;
		int					_minGradeExecution;

	protected:

		virtual void		doExecution() const = 0;

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

		class FormNotSignedException : public std::exception
		{
			public:
			virtual const char * what() const throw ();
		};

		class FormAlreadySignedException : public std::exception
		{
			public:
			virtual const char * what() const throw ();
		};

		AForm();
		AForm(const std::string name, int _minGradeSignature, int _minGradeExecution);
		AForm(const AForm &f);
		AForm &operator=(const AForm &f);
		virtual ~AForm();

		const std::string	&getName(void) const;
		bool				getSignedStatus(void) const;
		int					getMinGradeSignature(void) const;
		int					getMinGradeExecution(void) const;

		void				beSigned(const Bureaucrat &b);
		void				execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &o, const AForm &f);

#endif

// children classes: PresidentialPardonForm, RobotomyRequestForm, ShrubberyCreationForm
