/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:20:09 by timschmi          #+#    #+#             */
/*   Updated: 2025/01/18 12:08:02 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ctime>
#include <cstdlib>
#include <iostream>

//Classes
class Base
{
  private:
  public:
	virtual ~Base();
};

class A: public Base
{
  private:
  public:
};

class B: public Base
{
  private:
  public:
};

class C: public Base
{
  private:
  public:
};

//Functions

Base* generate(void);

void identify(Base *p);

void identify(Base &p);
