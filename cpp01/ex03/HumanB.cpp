/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 09:19:54 by aborda            #+#    #+#             */
/*   Updated: 2026/05/17 14:22:48 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) :
	_name(name)
{
	_weapon = NULL;
}

HumanB::HumanB(const HumanB& other) :
	_name(other._name),
	_weapon(other._weapon)
{
}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other)
	{
		_name = other._name;
		_weapon =  other._weapon;
	}
	return *this;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (_weapon)
	{
		std::cout
			<< _name
			<< " attacks with their "
			<< _weapon->getType()
			<< std::endl;
	}
}
