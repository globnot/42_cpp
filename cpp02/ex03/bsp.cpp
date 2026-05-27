/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:02:56 by aborda            #+#    #+#             */
/*   Updated: 2026/05/25 17:45:42 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	vector_a;
	Fixed	vector_b;
	Fixed	vector_c;
	bool	valid_a;
	bool	valid_b;

	vector_a = (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX());
	vector_b = (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX());
	vector_c = (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX());

	valid_a = vector_a > 0 && vector_b > 0 && vector_c > 0;
	valid_b = vector_a < 0 && vector_b < 0 && vector_c < 0;

	if (valid_a == true || valid_b == true)
		return true;
	return false;
}
