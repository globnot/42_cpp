/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:30:55 by aborda            #+#    #+#             */
/*   Updated: 2026/05/21 08:59:30 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

/* CONSTRUCTEUR */
Zombie::Zombie(std::string name) : 
	_name(name)
{
}

/* CONSTRUCTEUR DE COPIE */
Zombie::Zombie(const Zombie& other) : 
	_name(other._name)
{
}

/* OPERATEUR D'AFFECTATION */
Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
	{
		_name = other._name;
	}
	return *this;
}

 /* DESTRUCTEUR */
Zombie::~Zombie()
{
	std::cout
		<< _name
		<< ": DELETE"
		<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout
		<< _name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
