/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:38:51 by trossel           #+#    #+#             */
/*   Updated: 2023/01/10 19:25:27 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TextReplacer.hpp"

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	TextReplacer	replacer;
	std::string		filename;

	if (argc != 4)
	{
		std::cerr << "Error: " << argv[0] << " needs the filename, the string to change and the new string" << std::endl;
		return (1);
	}
	filename = argv[1];
	if (replacer.read(filename))
		return (1);
	if (replacer.replace(argv[2], argv[3]))
		return (2);
	if (replacer.write_to_file(filename.append(".replace")))
		return (3);
	return (0);
}
