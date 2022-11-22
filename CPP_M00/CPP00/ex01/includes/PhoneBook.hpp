/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:09:59 by vhaefeli          #+#    #+#             */
/*   Updated: 2022/11/22 08:03:36 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp" 
class PhoneBook {

	private:

		Contact	_PBContacts[8];
		static int		_NContacts;
		int		_Index;
		
	public

		PhoneBook();
		PhoneBook(Contact::_PBContact[8])
		~PhoneBook();
	

	


}