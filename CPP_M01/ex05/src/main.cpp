/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:12:04 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/01/11 12:44:07 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	harl;

	std::cout << "Debug message:" << std::endl;
	harl.complain("DEBUG");

	std::cout << std::endl << "Info message:" << std::endl;
	harl.complain("INFO");

	std::cout << std::endl << "Warning message:" << std::endl;
	harl.complain("WARNING");

	std::cout << std::endl << "Error message:" << std::endl;
	harl.complain("ERROR");

	std::cout << std::endl << "Other message:" << std::endl;
	harl.complain("something else");

	return (0);
}