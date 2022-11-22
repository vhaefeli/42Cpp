/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:09:59 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/22 09:46:58 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp" 
class PhoneBook {

	private:

		Contact		_PBContacts[8];
		static int	_NContacts;
		int			_Index;

		void		print_contacts();
		
	public:

		PhoneBook();
		PhoneBook(Contact _PBContact[8]);
		~PhoneBook();

		int	add_contact();

		void	searchh_contact();

};

#endif

	


}