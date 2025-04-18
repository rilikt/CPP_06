/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:23:47 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 12:28:36 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *d, *r;
	uintptr_t ptr;

	d = new Data;

	d->value1 = 1;
	d->value2 = 2;
	d->str = "Hehexd";

	ptr = Serializer::serialize(d);
	r = Serializer::deserialize(ptr);

	std::cout << "value1: " << r->value1  << "\nvalue2: " << r->value2 << "\nstr: " << r->str << std::endl;

	delete r;

	return(0);
}
