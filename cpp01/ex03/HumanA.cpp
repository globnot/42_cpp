/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 08:41:23 by aborda            #+#    #+#             */
/*   Updated: 2026/05/17 14:22:26 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :
	_name(name),
	_weapon(weapon)
{
}

HumanA::HumanA(const HumanA& other) :
	_name(other._name),
	_weapon(other._weapon)
{
}

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other)
	{
		_name = other._name;
		_weapon =  other._weapon;
	}
	return *this;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout
		<< _name
		<< " attacks with their "
		<< _weapon.getType()
		<< std::endl;

}
