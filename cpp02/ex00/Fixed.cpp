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

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout
		<< "Copy assignment operator called"
		<< std::endl;

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

int Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
		<< std::endl;

	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}
