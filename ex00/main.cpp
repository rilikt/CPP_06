/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:16:13 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/15 15:19:51 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//TO DO: check for variable ranges before conversion form string?
//myb check max len with regex
//inff and inf without + or - infront??
//Precision, reset? and what ammount to set it to? std::defaultfloatprecision or smth like that?

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		patternMatch(argv[1]);
	}
	else
	{
		std::cerr << "Invalid ammount of arguments" << std::endl;
	}
	return(0);
}