/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:39:15 by aborda            #+#    #+#             */
/*   Updated: 2026/05/25 14:38:07 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractBits = 8;

Fixed::Fixed() :
	_rawBits(0)
{
}

Fixed::Fixed(const int n) :
	_rawBits(n << 8)
{
}

Fixed::Fixed(const float n) :
	_rawBits(roundf(n * 256))
{
}

Fixed::Fixed(const Fixed& other) :
	_rawBits(other._rawBits)
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		_rawBits = other._rawBits;
	}
	return *this;
}

Fixed::~Fixed()
{
}

float Fixed::toFloat(void) const
{
	return (_rawBits / 256.0f);
}

int Fixed::toInt(void) const
{
	return (_rawBits >> 8);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

Fixed& Fixed::operator++()
{
	_rawBits = _rawBits + 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_rawBits = _rawBits + 1;
	return tmp;
}

Fixed& Fixed::operator--()
{
	_rawBits = _rawBits - 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_rawBits = _rawBits - 1;
	return tmp;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

bool operator>(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return true;
	return false;
}

bool operator<(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return true;
	return false;
}

bool operator>=(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() >= b.getRawBits())
		return true;
	return false;
}

bool operator<=(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() <= b.getRawBits())
		return true;
	return false;
}

bool operator==(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() == b.getRawBits())
		return true;
	return false;
}

bool operator!=(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() != b.getRawBits())
		return true;
	return false;
}

Fixed operator+(const Fixed& a, const Fixed& b)
{
	int calc;
	Fixed result;

	calc = a.getRawBits() + b.getRawBits();
	result.setRawBits(calc);

	return result;
}

Fixed operator-(const Fixed& a, const Fixed& b)
{
	int calc;
	Fixed result;

	calc = a.getRawBits() - b.getRawBits();
	result.setRawBits(calc);

	return result;
}

Fixed operator*(const Fixed& a, const Fixed& b)
{
	int calc;
	Fixed result;

	calc = (a.getRawBits() * b.getRawBits()) >> 8;
	result.setRawBits(calc);

	return result;
}

Fixed operator/(const Fixed& a, const Fixed& b)
{
	int calc;
	Fixed result;

	calc = (a.getRawBits() << 8) / b.getRawBits();
	result.setRawBits(calc);

	return result;
}

int Fixed::getRawBits(void) const
{
	return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}
