/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 14:15:05 by aborda            #+#    #+#             */
/*   Updated: 2026/05/26 07:25:05 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <ostream>

class Point
{
	private :
		const Fixed _x;
		const Fixed _y;

	public :
		Point();
		Point(const float _x, const float _y);
		Point(const Point& other);
		Point& operator=(const Point& other);
		~Point();

		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
