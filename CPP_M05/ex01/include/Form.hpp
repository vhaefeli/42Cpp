/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:20:12 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/03/01 14:25:10 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef FORM_HPP
# define	FORM_HPP

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		int					_minGradeSignature;
		int					_minGradeExecution;

	public:

			bool		getSignedStatus;

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

			Form();
			Form(const std::string name, int _minGradeSignature, int _minGradeExecution);
			Form(const Form &f);
			Form &operator=(const Form &f);
			~Form();

			const std::string	getName(void) const;
			void				beSigned(Bureaucrat &b);
			int					getMinGradeSignature(void) const;
			int					getMinGradeExecution(void) const;


};

std::ostream &operator<<(std::ostream &o, const Form &f);

#endif
