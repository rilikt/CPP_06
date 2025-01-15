/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PatternMatch.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:32:25 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/15 11:53:41 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <regex>

void patternMatch(char *str)
{
	std::regex char_pattern(R"([\D\S])");
	std::regex int_pattern(R"((-*|\+*)([0-9]{1,10}))");
	std::regex float_pattern(R"((-*|\+*)((\d+\.\d*f|\.\d+f)|(inff))|(nanf))"); // does inff have to have a + or - infront??
	std::regex double_pattern(R"((-*|\+*)((\d+\.\d*|\.\d+)|(inf))|(nan))");
	
	std::cmatch cm;

	if (std::regex_match(str, cm, char_pattern))
	{
		std::cout << "Char match found!: " << cm.str() << std::endl;
		charFound(*str);
	}
	else if (std::regex_match(str, cm, int_pattern))
		std::cout << "Int match found!: " << cm.str() << std::endl;
	else if (std::regex_match(str, cm, float_pattern))
		std::cout << "Float match found!: " << cm.str() << std::endl;
	else if (std::regex_match(str, cm, double_pattern))
		std::cout << "Double match found!: " << cm.str() << std::endl;
	else
		std::cerr << "No pattern match found" << std::endl;
}
