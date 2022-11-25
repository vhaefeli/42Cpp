/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:15:01 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/25 16:20:51 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {

public:

	Contact();
	~Contact();

	bool				setContact(int index);
	void				showContactSmall();
	void				showContactFull();
	void				showHeader();

private:

	int				    _NbDetails;
	static std::string	_fields[_NbDetails];
	std::string			_details[_NbDetails];
};

#endif
