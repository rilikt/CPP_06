/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:39:59 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/16 12:39:03 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// void printConversion(Type type)
// {
// 	switch (type)
// 	{
// 		case CHAR:
// 		case INT:
// 		case FLOAT:
// 		case DOUBLE:
// 		default:
// 			std::cerr << "No matching type in switch case found" << std::endl;
// 	}
// }

void charFound(char c) //How to set and reset precision correctly
{
	std::cout << c << std::endl;
	std::cout << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << static_cast<double>(c) << std::setprecision(0) << std::endl; 
}

void intFound(std::string str)
{
	long int li;
	int i;

	li = std::stol(str);
	if (li > std::numeric_limits<int>::max() || li < std::numeric_limits<int>::min())
	{
		std::cerr << "Value out of int range" << std::endl;
		return;
	}
	i = static_cast<int>(li);
	if (std::isprint(i))
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non diplayable" << std::endl;
	std::cout << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << static_cast<double>(i) << std::setprecision(0) << std::endl;
}

void floatFound(std::string str) //Check for isprintable and int overflow
{
	double d;
	float f;

	f = std::stof(str);
	// if (str.length() > 9)
	// 	std::cerr << "Value out of float range" << std::endl;
	// d = std::stod(str);
	// if (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::min())
	// {
	// 	std::cerr << "Value out of float range" << std::endl;
	// 	return;
	// }
	// f = static_cast<float>(d);
	// std::cout << std::fixed << f << "f" << std::endl;

	std::cout << static_cast<char>(f) << std::endl;
	std::cout << static_cast<int>(f) << std::endl;
	std::cout << std::fixed << f << "f" << std::endl;
	std::cout << static_cast<double>(f) << std::endl; 

	
}