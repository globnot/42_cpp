/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:33:22 by aborda            #+#    #+#             */
/*   Updated: 2026/05/27 20:05:12 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap() : 
	ClapTrap(),
	ScavTrap(),
	FragTrap()
{
	std::cout
		<< "*DiamondTrap* Default CONSTRUCTOR CALLED"
		<< std::endl;
}

/*
** Si on oublie ClapTrap(name + "_clap_name"), le compilo ne dit rien, ça compile, ça tourne... 
** Mais _name sera vide construct par défaut). Bug silencieux. 
** C'est pour ça que la classe la plus dérivée doit toujours initialiser explicitement la base virtuelle.
*/
DiamondTrap::DiamondTrap(std::string name) : 
	/* J'appelle ClapTrap directement */
	ClapTrap(name + "_clap_name"),
	/* Son ClapTrap interne sera donc ignoré */
	ScavTrap(name),
	/* Son ClapTrap interne sera donc ignoré */
	FragTrap(name)
{
	_name = name;
	_energypoints = 50;
	std::cout
		<< _name
		<< " *DiamondTrap* Param CONSTRUCTOR CALLED"
		<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : 
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other)

{
	_name = other._name;
	std::cout
		<< "*DiamondTrap* Copy CONSTRUCTOR CALLED"
		<< std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout
		<< "*DiamondTrap* Copy ASSIGNEMENT OPERATOR CALLED"
		<< std::endl;

	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{  
	std::cout
		<< (_name.empty() ? "" : _name + " ")
		<< "*DiamondTrap* Destructor CALLED"
		<< std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout
		<< "I am "
		<< _name
		<< " and my ClapTrap name is "
		<< ClapTrap::_name
		<< std::endl;
}
