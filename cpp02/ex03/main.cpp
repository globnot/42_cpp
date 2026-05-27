/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 15:03:11 by aborda            #+#    #+#             */
/*   Updated: 2026/05/25 17:51:18 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main()
{
	const Point a(0.0f, 0.0f);
	const Point b(4.0f, 0.0f);
	const Point c(0.0f, 4.0f);
	bool		result;

	std::cout
		<< "Point est sur un sommet"
		<< std::endl;
	result = bsp(a, b, c, Point(4.0f, 0.0f));
	if (result == true)
	{
		std::cout
			<< "VALID"
			<< std::endl;
	}
	else
	{
		std::cout
			<< "INVALID"
			<< std::endl;
	}

	std::cout
		<< "Point à l'interieur"
		<< std::endl;
	result = bsp(a, b, c, Point(1.0f, 1.0f));
	if (result == true)
	{
		std::cout
			<< "VALID"
			<< std::endl;
	}
	else
	{
		std::cout
			<< "INVALID"
			<< std::endl;
	}

	std::cout
		<< "Point à l'exterieur"
		<< std::endl;
	result = bsp(a, b, c, Point(5.0f, 1.0f));
	if (result == true)
	{
		std::cout
			<< "VALID"
			<< std::endl;
	}
	else
	{
		std::cout
			<< "INVALID"
			<< std::endl;
	}

	std::cout
		<< "Point sur une arrete"
		<< std::endl;
	result = bsp(a, b, c, Point(2.0f, 0.0f));
	if (result == true)
	{
		std::cout
			<< "VALID"
			<< std::endl;
	}
	else
	{
		std::cout
			<< "INVALID"
			<< std::endl;
	}

	return 0;
}
