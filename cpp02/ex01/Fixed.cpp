/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:39:15 by aborda            #+#    #+#             */
/*   Updated: 2026/05/23 11:44:18 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractBits = 8;

Fixed::Fixed() :
	_rawBits(0)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
}

Fixed::Fixed(const int n) :
	_rawBits(n << 8)
{
	std::cout
		<< "Int constructor called"
		<< std::endl;
}

Fixed::Fixed(const float n) :
	_rawBits(roundf(n * 256))
{
	std::cout
		<< "Float constructor called"
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

float Fixed::toFloat(void) const
{
	return (_rawBits / 256.0f);
}

int Fixed::toInt(void) const
{
	return (_rawBits >> 8);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
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
