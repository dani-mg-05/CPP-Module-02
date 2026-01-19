/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <damedina@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:47:21 by damedina          #+#    #+#             */
/*   Updated: 2026/01/10 17:47:22 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed result = (a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()));
	if (result < Fixed(0))
		result = result * Fixed(-1);
	return(result / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return (false);

	Fixed abp = area(a, b, point);
	Fixed bcp = area(b, c, point);
	Fixed acp = area(a, c, point);

	if (abp == 0 || bcp == 0 || acp == 0)
		return (false);

	if (abp + bcp + acp != area(a, b, c))
		return (false);

	return (true);
}
