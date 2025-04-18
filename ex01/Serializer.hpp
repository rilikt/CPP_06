/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:23:51 by timschmi          #+#    #+#             */
/*   Updated: 2025/04/18 12:24:33 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include <iostream>

typedef struct s_data
{
	int value1;
	int value2;
	std::string str;
} Data;

class Serializer
{
  private:
	Serializer();
  public:
	~Serializer() = delete;
	Serializer(const Serializer &other) = delete;
	Serializer& operator=(const Serializer &other) = delete;
	static uintptr_t serialize(Data *ptr);
	static Data* deserialize(uintptr_t raw);
};
