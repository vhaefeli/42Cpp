/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:34:41 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/24 17:45:27 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>();
		MutantStack<T>(const MutantStack &);
		MutantStack<T> &operator=(const MutantStack<T> &rhs);
		~MutantStack<T>();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()  { return this->c.begin(); }
		iterator end()    { return this->c.end(); }

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend()   { return this->c.rend(); }

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator begin() const { return this->c.begin(); }
		const_iterator end() const { return this->c.end(); }

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const { return this->c.rbegin(); }
		const_reverse_iterator rend() const { return this->c.rend(); }
};

template<class T>
MutantStack<T>::MutantStack()
	: std::stack<T>()
{
}

template<class T>
MutantStack<T>::~MutantStack()
{
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack &rhs)
{
	*this = rhs;
}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	std::stack<T>::operator=(rhs);
}

#endif 