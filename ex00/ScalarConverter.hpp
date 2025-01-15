/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:10:43 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/15 14:10:12 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class ScalarConverter
{
  private:
  public:
	static void convert(std::string str); //research static keyword
  
};

void patternMatch(char *str);
void charFound(char c);