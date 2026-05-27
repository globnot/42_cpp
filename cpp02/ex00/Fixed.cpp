/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:39:15 by aborda            #+#    #+#             */
/*   Updated: 2026/05/23 10:01:30 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractBits = 8;

Fixed::Fixed() :
	/*
	** INITIALIZATION LIST
	** Sert à init une const avec sa valeur puisque on ne peut pas le faire ensuite dans le corps du constructeur.
	*/
	_rawBits(0)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(const Fixed& other) :
	_rawBits(other._rawBits)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
}

/*
** other = adresse de l'objet source (b ici).
** this = adresse de l'objet courant (c ici), l'objet sur lequel on appelle la métode.
** On return Fixed& pour le chaînage, car a = b = c en C++ existe.
** On return pas Fixed car on veut retourner l'objet lui-même sans le recopier.
*/
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout
		<< "Copy assignment operator called"
		<< std::endl;

	/*
	** Ici cette comparaison protège de l'auto-affectation (si quelqu'un écrit a = a dans le main)
	** On évite de recopier un objet sur lui même
	*/
	if (this != &other)
	{
		_rawBits = other._rawBits;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout
		<< "Destructor called"
		<< std::endl;
}

/* GETTERS */
int Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
		<< std::endl;

	return _rawBits;
}

/* SETTERS */
void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}
