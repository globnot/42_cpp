/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:28:53 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 19:23:13 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() :
	_name(""),
	_hitpoints(10),
	_energypoints(10),
	_attackdamage(0)
{
	std::cout
		<< "*ClapTrap* Default CONSTRUCTOR CALLED"
		<< std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hitpoints(10),
	_energypoints(10),
	_attackdamage(0)
{
	std::cout
		<< _name
		<< " *ClapTrap* Param CONSTRUCTOR CALLED"
		<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) :
	_name(other._name),
	_hitpoints(other._hitpoints),
	_energypoints(other._energypoints),
	_attackdamage(other._attackdamage)
{
	std::cout
		<< "*ClapTrap* Copy CONSTRUCTOR CALLED"
		<< std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout
		<< "*ClapTrap* Copy ASSIGNEMENT OPERATOR CALLED"
		<< std::endl;

	if (this != &other)
	{
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energypoints = other._energypoints;
		_attackdamage = other._attackdamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{  
	std::cout
		<< (_name.empty() ? "" : _name + " ")
		<< "*ClapTrap* Destructor CALLED"
		<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;

	_energypoints--;

	std::cout
		<< "ClapTrap "
		<< (_name.empty() ? "" : _name + " ")
		<< "attacks "
		<< target
		<< ", causing "
		<< _attackdamage
		<< " points of damage!"
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints <= 0)
		return ;

	_hitpoints = _hitpoints - amount;

	std::cout
		<< "ClapTrap "
		<< (_name.empty() ? "" : _name + " ")
		<< "takes "
		<< amount
		<< " points of damage!"
		<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitpoints <= 0 || _energypoints <= 0)
		return ;

	_hitpoints = _hitpoints + amount;
	_energypoints--;

	std::cout
		<< "ClapTrap "
		<< (_name.empty() ? "" : _name + " ")
		<< "repairs itself for "
		<< amount
		<< " hitpoints! "
		<< std::endl;
}
