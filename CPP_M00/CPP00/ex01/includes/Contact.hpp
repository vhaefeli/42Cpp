/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:15:01 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/22 16:41:08 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;

public:

		Contact();
		Contact(std::string fn, std::string ln, std::string nn, std::string ph,
				std::string ds);
		Contact(const Contact& other);
		Contact &operator=(const Contact&);

	~Contact();

	std::string		getFirstName() const;
	std::string		getLastName() const;
	std::string		getNickname() const;
	std::string		getPhoneNumber() const;
	std::string		getDarkestSecret() const;

	std::string		setFirstName();
	std::string		setLastName();
	std::string		setNickname();
	std::string		setPhoneNumber();
	std::string		setDarkestSecret();
};

#endif
