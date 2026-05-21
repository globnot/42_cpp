/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 07:43:43 by aborda            #+#    #+#             */
/*   Updated: 2026/05/17 14:23:15 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() :
	_type("")
{
}

Weapon::Weapon(std::string type) :
	_type(type)
{
}

Weapon::Weapon(const Weapon& other) :
	_type(other._type)
{
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}
