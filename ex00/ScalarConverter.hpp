/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:10:43 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/17 12:45:22 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cctype>

enum Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

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

//Printing
void printConversion(t_input s);
