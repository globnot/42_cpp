/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:07:13 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 08:39:21 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "utils/msg.hpp"

Animal::Animal() :
	_type("No Type")
{
	msg("*Animal* DEFAULT CONSTRUCTOR CALLED");
}

Animal::Animal(std::string type) :
	_type(type)
{
	msg("*Animal* PARAM CONSTRUCTOR CALLED");
}

Animal::Animal(const Animal& src) :
	_type(src._type)
{
	msg("*Animal* COPY CONSTRUCTOR CALLED");
}

Animal& Animal::operator=(const Animal& src)
{
	msg("*Animal* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		_type = (src._type);
	}
	return *this;
}

Animal::~Animal()
{
	msg("*Animal* DESTRUCTOR CALLED");
}

std::string Animal::getType() const
{
	return _type;
}

void	Animal::makeSound(void) const
{
	msg("No Sound");
}
