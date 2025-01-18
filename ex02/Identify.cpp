/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:29:06 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/18 13:17:35 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base* generate(void)
{
	int i;
	std::srand(std::time(nullptr));

	i = 1 + rand() % 3;

	std::cout << "Random Class created: " << static_cast<char>(64+i) << std::endl;

	switch (i)
	{
		case 1:
			return new A;
		case 2:
			return new B;
		case 3:
			return new C;
		default:
			std::cout << "No matching case" << std::endl;
	}
	return (nullptr);
}

void identify(Base *p)
{
	A *a_ptr = dynamic_cast<A*>(p);
	B *b_ptr = dynamic_cast<B*>(p);
	C *c_ptr = dynamic_cast<C*>(p);

	if (a_ptr)
		std::cout << "Pointer of class A identified" << std::endl;
	else if (b_ptr)
		std::cout << "Pointer of class B identified" << std::endl;
	else if (c_ptr)
		std::cout << "Pointer of class C identified" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference of class A identified" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Reference of class B identified" << std::endl;
	}
	catch (const std::exception &e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Reference of class C identified" << std::endl;
	}
	catch (const std::exception &e) {}

}
