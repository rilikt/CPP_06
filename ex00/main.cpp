/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:16:13 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/17 17:01:48 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//inff and inf without + or - infront??
//Precision, reset? and what ammount to set it to? std::defaultfloatprecision or smth like that?

//Dynamically set precision!!?!?!?!?!?

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << "Invalid ammount of arguments" << std::endl, 1);
	ScalarConverter::convert(argv[1]);

	return(0);
}