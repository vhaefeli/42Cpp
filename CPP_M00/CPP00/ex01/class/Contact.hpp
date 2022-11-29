/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:15:01 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/29 10:27:22 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

#define NB_DETAILS 6

class Contact {

public:

	Contact();
	~Contact();

	bool				setContact(int index);
	void				showContactSmall();
	void				showContactFull();
	void				showHeader();

private:

	static std::string	fields[NB_DETAILS];
	std::string			_details[NB_DETAILS];
};

#endif
