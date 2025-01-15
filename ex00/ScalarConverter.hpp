/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:10:43 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/15 15:11:29 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>

class ScalarConverter
{
  private:
  public:
	static void convert(std::string str); //research static keyword
  
};

//Parsing
void patternMatch(char *str);

//Conversion
void charFound(char c);
void intFound(std::string str);
void floatFound(std::string str);
void doubleFound(std::string str);
