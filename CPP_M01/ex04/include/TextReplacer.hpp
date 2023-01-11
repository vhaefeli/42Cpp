/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:03:52 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/11 17:23:22 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTREPLACER_HPP
# define TEXTREPLACER_HPP

#include <string>
#include <fstream>

class TextReplacer {

	public:

		TextReplacer();
		~TextReplacer();

		bool	read(std::string filename);

		bool	replace(std::string str, std::string replacement);

		bool	write_to_file(std::string filename);

	private:

		std::string		_buffer;

};

#endif
