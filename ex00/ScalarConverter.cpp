/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:39:59 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 11:58:33 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
	try
	{
		patternMatch(str.data());
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
		exit(1);
	}
}

void ScalarConverter::printConversion(t_input s)
{
	if (s.cv == IMPOSS)
		std::cout << "char: Impossible" << std::endl;
	else if (s.cv == NONDIS)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << s.c << "'" << std::endl;
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

void ScalarConverter::charFound(char c)
{
	auto s = setInput();

	s.c = c;
	s.i = static_cast<int>(c);
	s.f = static_cast<float>(c);
	s.d = static_cast<double>(c);

	printConversion(s);
}

void ScalarConverter::intFound(std::string str)
{
	auto s = setInput();

	s.i = std::stoi(str);

	if(s.i > 127 || s.i < -128)
		s.cv = IMPOSS;
	else if (std::isprint(s.i))
		s.c = static_cast<char>(s.i);
	else
		s.cv = NONDIS;

	s.f = static_cast<float>(s.i); 
	s.d = static_cast<double>(s.i);

	printConversion(s);
}

void ScalarConverter::floatFound(std::string str)
{
	auto s = setInput();

	s.f = std::stof(str);

	if(s.f > static_cast<float>(std::numeric_limits<int>::max()) || s.f < static_cast<float>(std::numeric_limits<int>::min()) || str == "nanf")
		s.iv = IMPOSS;
	else
		s.i  = static_cast<int>(s.f);

	if (s.iv == VALID && std::isprint(s.i))
		s.c = static_cast<char>(s.f);
	else if(s.i > 127 || s.i < -128 || s.iv == IMPOSS)
		s.cv = IMPOSS;
	else
		s.cv = NONDIS;

	s.d = static_cast<double>(s.f);

	printConversion(s);
}

void ScalarConverter::doubleFound(std::string str)
{
	auto s = setInput();

	s.d = std::stod(str);

	if(s.d > static_cast<double>(std::numeric_limits<int>::max()) || s.d < static_cast<double>(std::numeric_limits<int>::min()) || str == "nan")
		s.iv = IMPOSS;
	else
		s.i  = static_cast<int>(s.d);

	if (s.iv == VALID && std::isprint(s.i))
		s.c = static_cast<char>(s.d);
	else if(s.i > 127 || s.i < -128 || s.iv == IMPOSS)
		s.cv = IMPOSS;
	else
		s.cv = NONDIS;

	s.f = static_cast<float>(s.d);

	printConversion(s);
}

t_input ScalarConverter::setInput()
{
	t_input s;

	s.c =0;
	s.cv = VALID;
	s.i = 0;
	s.iv = VALID;
	s.f = 0.0f;
	s.fv = VALID;
	s.d = 0.0;
	s.dv = VALID;

	return (s);
}
