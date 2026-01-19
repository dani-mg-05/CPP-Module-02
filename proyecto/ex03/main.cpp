/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <damedina@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:55:24 by damedina          #+#    #+#             */
/*   Updated: 2026/01/10 13:55:30 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Point a(0.0, 0.0);
	Point b(4.0, 0.0);
	Point c(0.0, 4.0);

	Point p1(0.2, 0.2);

	bool result = bsp(a, b, c, p1);

	std::cout << "El resultado es: " << result << "\n";

	Point p2(-1.0, 1.0);

	result = bsp(a, b, c, p2);

	std::cout << "El resultado es: " << result << "\n";

	Point p3(0.0, 0.0);

	result = bsp(a, b, c, p3);

	std::cout << "El resultado es: " << result << "\n";

	Point p4(0.0, 1.0);

	result = bsp(a, b, c, p4);

	std::cout << "El resultado es: " << result << "\n";

	return 0;
}
