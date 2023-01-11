/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:03:25 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/11 17:23:14 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TextReplacer.hpp"

#include <iostream>
#include <iterator>

TextReplacer::TextReplacer()
{
}

TextReplacer::~TextReplacer()
{
}

bool	TextReplacer::read(std::string filename)
{
	std::ifstream	inf;

	inf.open(filename.c_str());
	if (!inf.is_open())
	{
		std::cerr << "Error: cannot open input file '" << filename << "'" << std::endl;
		return (1);
	}
	this->_buffer.assign(std::istreambuf_iterator<char>(inf), std::istreambuf_iterator<char>());
	inf.close();
	return (0);
}

bool	TextReplacer::replace(std::string str, std::string replacement)
{
	size_t		start_pos;
	size_t		pos;

	if (str.empty())
	{
		std::cerr << "Error: string to replace cannot be empty" << std::endl;
		return (1);
	}
	if (this->_buffer.empty())
	{
		std::cerr << "Error: _buffer is empty" << std::endl;
		return (2);
	}
	start_pos = 0;
	pos = this->_buffer.find(str, start_pos);
	while (pos != std::string::npos)
	{
		this->_buffer.erase(pos, str.size());
		this->_buffer.insert(pos, replacement);
		start_pos = pos + replacement.length();
		pos = this->_buffer.find(str, start_pos);
	}
	return (0);
}


bool	TextReplacer::write_to_file(std::string filename)
{
	std::ofstream	os(filename.c_str());

	if (!os.is_open())
	{
		std::cerr << "Error: cannot create replacement file" << std::endl;
		return (1);
	}
	os << this->_buffer;
	os.close();
	return (0);
}
