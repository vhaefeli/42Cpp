/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <trossel@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:38:51 by trossel           #+#    #+#             */
/*   Updated: 2022/06/16 18:07:01 by trossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TextReplacer.hpp"

#include <fstream>
#include <iostream>

int main(int ac, char *av[])
{
	TextReplacer	replacer;
	std::string		filename;

	if (ac != 4)
	{
		std::cerr << "Error: " << av[0] << " needs 4 arguments" << std::endl;
		return (1);
	}
	filename = av[1];
	if (replacer.read(filename))
		return (1);
	if (replacer.replace(av[2], av[3]))
		return (2);
	if (replacer.write_to_file(filename.append(".replace")))
		return (3);
	return (0);
}
