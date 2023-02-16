/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:14:13 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/13 11:54:52 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

#include <iostream>
#include <string>

int main ()
{
	const unsigned int	tabSize = 10;

	std::cout << "---------- Empty Array" << std::endl;
	{
		Array<float>	float_array;
		std::cout << "Some empty float array:" << float_array << std::endl;
	}
	std::cout << "---------- INTS ------------" << std::endl;
	{
		Array<int>		some_array(tabSize);
		Array<int>		some_array_2(tabSize / 2);

		std::cout << "Uninitialized int array: " << some_array << std::endl;
		for (unsigned int i = 0; i < tabSize; i++) {
			some_array[i] = 4 * i;
		}
		std::cout << "After initialization int array: " << some_array << std::endl;

		try
		{
			std::cout << "Trying to print an out of bounds value: " << some_array[tabSize] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

		std::cout << "--------  Copying int array ------------" << std::endl;
		std::cout << "Some array 2 before copying: " << some_array_2 << std::endl;
		std::cout << "Copying !" << std::endl;
		some_array_2 = some_array;
		for (unsigned int i = 0; i < some_array_2.size(); i++) {
			some_array_2[i] = 3 * i;
		}
		std::cout << "Some array 1: " << some_array << std::endl;
		std::cout << "Some array 2: " << some_array_2 << std::endl;
	}

	std::cout << "---------- STRINGS ------------" << std::endl;
	std::cout << "---------- Empty Array" << std::endl;
	{
		Array<std::string>	string_array;
		std::cout << "Some empty string array: " << string_array << std::endl;

		string_array = Array<std::string>(tabSize);
		std::cout << "Some Uninitialized string array: " << string_array << std::endl;
	}
	{
		std::string static_tab[10] = {
			"This",
			"CPP",
			"Piscine",
			"Is",
			"Very",
			"Veryyyyyy",
			"Much",
			"Too",
			"Long",
			"!!!!!!!!!!!!!!!!"};

		Array<std::string>	some_array(tabSize);

		std::cout << "Uninitialized string array: " << some_array << std::endl;
		for (unsigned int i = 0; i < tabSize; i++) {
			some_array[i] = static_tab[i];
		}
		std::cout << "After initialization string array: " << some_array << std::endl;
	}

	return 0;
}