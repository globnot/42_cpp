/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:33:22 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 11:04:11 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;

	std::cout
		<< "*ScavTrap* Default CONSTRUCTOR CALLED"
		<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;

	std::cout
		<< _name
		<< " *ScavTrap* Param CONSTRUCTOR CALLED"
		<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout
		<< "*ScavTrap* Copy CONSTRUCTOR CALLED"
		<< std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout
		<< "*ScavTrap* Copy ASSIGNEMENT OPERATOR CALLED"
		<< std::endl;

	if (this != &other)
	{
		/* ON DELEGUE A LA CLASSE MERE */
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap()
{  
	std::cout
		<< (_name.empty() ? "" : _name + " ")
		<< "*ScavTrap* Destructor CALLED"
		<< std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;

	_energypoints--;

	std::cout
		<< "ScavTrap "
		<< (_name.empty() ? "" : _name + " ")
		<< "attacks "
		<< target
		<< ", causing "
		<< _attackdamage
		<< " points of damage!"
		<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout
		<< "ScavTrap "
		<< (_name.empty() ? "" : _name + " ")
		<< "is now in Gate keeper mode"
		<< std::endl;
}
