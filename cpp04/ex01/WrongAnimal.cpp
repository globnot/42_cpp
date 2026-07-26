/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:07:13 by aborda            #+#    #+#             */
/*   Updated: 2026/06/04 08:45:56 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "utils/msg.hpp"

WrongAnimal::WrongAnimal() :
	_type("No Type")
{
	msg("*WrongAnimal* DEFAULT CONSTRUCTOR CALLED");
}

WrongAnimal::WrongAnimal(std::string type) :
	_type(type)
{
	msg("*WrongAnimal* PARAM CONSTRUCTOR CALLED");
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) :
	_type(src._type)
{
	msg("*WrongAnimal* COPY CONSTRUCTOR CALLED");
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	msg("*WrongAnimal* COPY ASSIGNEMENT CONSTRUCTOR CALLED");

	if (this != &src)
	{
		_type = (src._type);
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	msg("*WrongAnimal* DESTRUCTOR CALLED");
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::makeSound(void) const
{
	msg("No Sound");
}
