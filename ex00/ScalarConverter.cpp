/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:39:59 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/15 15:34:07 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void charFound(char c) //How to set and reset precision correctly
{
	std::cout << c << std::endl;
	std::cout << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << static_cast<double>(c) << std::setprecision(0) << std::endl; 
}

void intFound(std::string str)
{
	int i;
	try
	{
		i = std::stoi(str);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
		return;
	}

	if (std::isprint(i))
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "Non diplayable" << std::endl;
	std::cout << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << static_cast<double>(i) << std::setprecision(0) << std::endl;
}
