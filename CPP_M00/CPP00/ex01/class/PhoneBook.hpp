/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:09:59 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/29 11:40:01 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define ADD "ADD"
# define SEARCH "SEARCH"
# define EXIT "EXIT"
# define MAX_CONTACTS 8

# include "Contact.hpp"

class PhoneBook {

	private:

		Contact		_contacts[8];
		int			_nContacts;
		int			_n;

		void		_printPhoneBook(void);

	public:

		PhoneBook();
		~PhoneBook();

		int	addContact();

		void	searchContact();

};

#endif
