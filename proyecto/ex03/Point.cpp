/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <damedina@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:46:27 by damedina          #+#    #+#             */
/*   Updated: 2026/01/10 17:46:29 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0) {}

Point::Point(const float x, const float y): x(x), y(y) {}

Point::Point(const Point &point): x(point.x), y(point.y) {}

Point::~Point(void) {}

Point &Point::operator=(const Point &point)
{
	if (this != &point)
	{
		(Fixed) x = point.x;
		(Fixed) y = point.y;
	}
	return (*this);
}

bool Point::operator==(const Point &point) const
{
	return ((x == point.x) && (y == point.y));
}

Fixed Point::getX(void) const
{
	return (x);
}

Fixed Point::getY(void) const
{
	return (y);
}
