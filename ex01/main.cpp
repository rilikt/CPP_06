/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:23:47 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/17 17:53:33 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//read up more on uintptr
//maybe gather some more information about casting in cpp in general
//downcasting?

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

	std::cout << r->value1 << r->value2 << r->str << std::endl;

	delete d;
	
	return(0);
}