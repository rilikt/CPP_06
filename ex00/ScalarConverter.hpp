/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:10:43 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 12:21:07 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <regex>

enum Valid
{
	IMPOSS,
	NONDIS,
	VALID,
};

typedef struct s_input
{
	char c;
	Valid cv;
	int i;
	Valid iv;
	float f;
	Valid fv;
	double d;
	Valid dv;
} t_input;

class ScalarConverter
{
  private:
	//Non-instanciable
	ScalarConverter();

	//Parsing
	static void patternMatch(char *str);

	//Conversion
	static t_input setInput();
	static void charFound(char c);
	static void intFound(std::string str);
	static void floatFound(std::string str);
	static void doubleFound(std::string str);

	//Printing
	static void printConversion(t_input s);
  public:
	~ScalarConverter() = delete;
	ScalarConverter(const ScalarConverter &other) = delete;
	ScalarConverter& operator=(const ScalarConverter &other) = delete;
	static void convert(std::string str);
};
// Static funcitons can be called without an object and can only access other static members inside the class
