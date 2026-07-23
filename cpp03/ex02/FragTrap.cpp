/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:33:22 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 16:23:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;

	std::cout
		<< "*FragTrap* Default CONSTRUCTOR CALLED"
		<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;

	std::cout
		<< _name
		<< " *FragTrap* Param CONSTRUCTOR CALLED"
		<< std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout
		<< "*FragTrap* Copy CONSTRUCTOR CALLED"
		<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout
		<< "*FragTrap* Copy ASSIGNEMENT OPERATOR CALLED"
		<< std::endl;

	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap()
{  
	std::cout
		<< (_name.empty() ? "" : _name + " ")
		<< "*FragTrap* Destructor CALLED"
		<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout
		<< "HighFivesGuys !"
		<< std::endl;
}
