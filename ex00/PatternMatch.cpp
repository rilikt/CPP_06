/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PatternMatch.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:32:25 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/16 12:22:12 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <regex>

void patternMatch(char *str)
{
	std::regex char_pattern(R"(\s*([\D\S])\s*)");
	std::regex int_pattern(R"(\s*((-?|\+?)[0-9]{1,10})\s*)");
	std::regex float_pattern(R"(\s*((-?|\+?)((\d+\.\d*f|\.\d+f)|(inff))|(nanf))\s*)"); // does inff have to have a + or - infront??
	std::regex double_pattern(R"(\s*((-?|\+?)((\d+\.\d*|\.\d+)|(inf))|(nan))\s*)");
	
	std::cmatch cm;

	if (std::regex_match(str, cm, char_pattern))
	{
		std::cout << "Char match found!: " << cm.str(1) << std::endl;
		charFound(cm.str(1)[0]);
	}
	else if (std::regex_match(str, cm, int_pattern))
	{
		std::cout << "Int match found!: " << cm.str(1) << std::endl;
		intFound(cm.str(1));
	}
	else if (std::regex_match(str, cm, float_pattern))
	{
		std::cout << "Float match found!: " << cm.str(1) << std::endl;
		floatFound(cm.str(1));
	}
	// else if (std::regex_match(str, cm, double_pattern))
	// {
	// 	std::cout << "Double match found!: " << cm.str(1) << std::endl;
	// 	doubleFound(cm.str(1));
	// }
	else
		std::cerr << "No pattern match found" << std::endl;
}
