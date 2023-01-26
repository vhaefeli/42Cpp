/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:20:12 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/26 21:40:18 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef AFORM_HPP
# define	AFORM_HPP

class Bureaucrat;

class AForm
{
	protected:
		const std::string	_name;
		bool				_isSigned;
		int					_minGradeSignature;
		int					_minGradeExecution;

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

			AForm();
			AFrom(const std::string name, int _minGradeSignature, int _minGradeExecution);
			AFrom(const AFrom &f);
			AFrom &operator=(const AFrom &f);
			~AFrom();

			const std::string	getName(void) const;
			bool				getSignedStatus(void) const;
			int					getMinGradeSignature(void) const;
			int					getMinGradeExecution(void) const;

			void				beSigned(Bureaucrat &b);
			virtual void		execute(Bureaucrat const & executor) const = 0;


};

std::ostream &operator<<(std::ostream &o, const AFrom &f);

#endif
