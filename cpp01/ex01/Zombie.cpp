/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:30:55 by aborda            #+#    #+#             */
/*   Updated: 2026/05/17 14:21:19 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() : 
	_name("")
{
}

Zombie::Zombie(std::string name) : 
	_name(name)
{
}

Zombie::Zombie(const Zombie& other) : 
	_name(other._name)
{
}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
}

Zombie::~Zombie()
{
	std::cout
		<< _name
		<< ": DELETE"
		<< std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void)
{
	std::cout
		<< _name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
