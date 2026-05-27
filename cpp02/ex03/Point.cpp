/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:39:15 by aborda            #+#    #+#             */
/*   Updated: 2026/05/26 07:28:30 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <cmath>

Point::Point() :
	_x(0),
	_y(0)
{
}

Point::Point(const float x, const float y) :
	_x(x),
	_y(y)
{
}

Point::Point(const Point& other) :
	_x(other._x),
	_y(other._y)
{
}

Point& Point::operator=(const Point& other)
{
	if (this != &other)
	{
	}
	return *this;
}
    
Point::~Point()
{
}

Fixed Point::getX(void) const
{
	return _x;
}

Fixed Point::getY(void) const
{
	return _y;
}
