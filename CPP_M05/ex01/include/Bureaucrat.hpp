/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:07 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/24 12:43:24 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Form.hpp"

#ifndef		BUREAUCRAT_HPP
# define	BUREAUCRAT_HPP


class Bureaucrat
{
	private:

		const std::string	_name;
		int		_grade;

		const static int minGrade = 150;
		const static int maxGrade = 1;

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

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat &operator=(const Bureaucrat &b);
		~Bureaucrat();

		const std::string	getName(void) const;
		int			getGrade(void) const;
		void		promote();
		void		demote();
		void		signFrom(Form i);

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

#endif

