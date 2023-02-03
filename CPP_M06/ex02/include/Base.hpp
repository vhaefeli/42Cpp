/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:59:52 by vhaefeli          #+#    #+#             */
/*   Updated: 2023/02/03 22:30:52 by vhaefeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	private:

	public:
		
	virtual	~Base()
	{}
};

class A : public Base
{
	private:

	public:
		
	~A()
	{}
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void);

void identify(Base* p);

void identify(Base& p);

#endif