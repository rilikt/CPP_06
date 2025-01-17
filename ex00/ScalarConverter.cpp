/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:39:59 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/17 12:44:32 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void printConversion(t_input s)
{
	if (s.cv == IMPOSS)
		std::cout << "char: Impossible" << std::endl;
	else if (s.cv == NONDIS)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << s.c << std::endl;
	if (s.iv == IMPOSS)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: "<< s.i << std::endl;
	if (s.fv == IMPOSS)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << s.f << "f" << std::endl;
	if (s.dv == IMPOSS)
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << s.d << std::endl; 
}

void charFound(char c)
{
	t_input s;

	s.c = c;
	s.i = static_cast<int>(c);
	s.f = static_cast<float>(c);
	s.d = static_cast<double>(c);

	printConversion(s);
}

void intFound(std::string str)
{
	t_input s;

	s.i = std::stoi(str);

	if (std::isprint(s.i))
		s.c = static_cast<char>(s.i);
	else
		s.cv = NONDIS;
	s.f = static_cast<float>(s.i); 
	// s.fv = VALID;
	s.d = static_cast<double>(s.i);

	printConversion(s);
}

void floatFound(std::string str) //Check for isprintable and int overflow
{
	t_input s;

	s.f = std::stof(str);

	s.c = static_cast<char>(s.f);
	s.i = static_cast<int>(s.f);
	s.d = static_cast<double>(s.f);

	printConversion(s);
}

void doubleFound(std::string str)
{
	t_input s;

	s.d = std::stod(str);

	s.c = static_cast<char>(s.d);
	
	if(s.d > static_cast<int>(std::numeric_limits<int>::max()) || s.d < static_cast<int>(std::numeric_limits<int>::min()))
		std::cout << "Int: out of range" << std::endl;
	else
		s.i  = static_cast<int>(s.d);
	
	s.f = static_cast<float>(s.d);

	printConversion(s);
}
