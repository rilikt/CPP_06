/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PatternMatch.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:32:25 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/14 17:16:01 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <regex>

void patternMatch(char *str)
{
	// std::regex pattern(R"([a-zA-Z]+)");
	std::regex pattern(R"(\d\.\df|\d\.f|\.\df)"); // add \d max digit length || is there a better way to write this without using so many or(|)?
	std::cmatch cm;

	if (std::regex_match(str, cm, pattern))
		std::cout << "WOW, we have a match! " << cm.str() << std::endl;
	else
		std::cout << "No pattern match found" << std::endl;
}
