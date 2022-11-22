/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:09:59 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/22 15:55:21 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
class PhoneBook {

	private:

		Contact		_contacts[8];
		int			_next;
		int			_n;

		std::string	user_input(std::string prompt);
		void		print_contacts(int i);

	public:

		PhoneBook();

		~PhoneBook();

		PhoneBook(const PhoneBook&);

		int	add_contact();

		void	search_contact();

};

#endif




}
