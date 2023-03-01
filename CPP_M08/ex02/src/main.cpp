/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:32:53 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/28 15:43:05 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutanStack.hpp"

int main()
{
	std::list<int> oneList;
	MutantStack<int> mstack;
	
	std::cout << "mutantstack" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "list" << std::endl;
	oneList.push_back(5);
	oneList.push_back(17);
	std::cout << oneList.back() << std::endl;
	oneList.pop_back();
	std::cout << oneList.size() << std::endl;
	oneList.push_back(3);
	oneList.push_back(5);
	oneList.push_back(737);
	oneList.push_back(0);
	std::list<int>::iterator lit = oneList.begin();
	std::list<int>::iterator lite = oneList.end();
	++lit;
	--lit;

	while (lit != lite)
	{
	std::cout << *lit << std::endl;
	++lit;
	}

	return 0;
}
