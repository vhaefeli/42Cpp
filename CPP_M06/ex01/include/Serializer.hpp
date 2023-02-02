/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:31:27 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/02 16:54:08 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include data.hpp

class Serializer
{
	private:
		Data *_data;
		Serializer();

	public:
		Serializer(Data *data);

		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);

}
