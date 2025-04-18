/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:16:13 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 12:16:28 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << "Invalid ammount of arguments" << std::endl, 1);
	ScalarConverter::convert(argv[1]);

	return(0);
}
