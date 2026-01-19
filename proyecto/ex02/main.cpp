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

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "\n---\n\n";

	Fixed a2;
	Fixed const b2(Fixed(5.05f) * Fixed(2));

	std::cout << "A: " << a2 << std::endl;
	std::cout << "B: " << b2 << std::endl;

	std::cout << "Min: " << Fixed::min(a2, b2) << std::endl;
	std::cout << "Max: " << Fixed::max(a2, b2) << std::endl;

	std::cout << "++A: " << ++a2 << std::endl;
	std::cout << "--A: " << --a2 << std::endl;
	std::cout << "A++: " << a2++ << std::endl;
	std::cout << "A--: " << a2-- << std::endl;

	std::cout << "A + B: " << a2 + b2 << std::endl;
	std::cout << "A - B: " << a2 - b2 << std::endl;

	a2 = Fixed(5);

	std::cout << "A: " << a2 << std::endl;

	std::cout << "A * B: " << a2 * b2 << std::endl;
	std::cout << "A / B: " << a2 / b2 << std::endl;

	std::cout << "A > B: " << (a2 > b2) << std::endl;
	std::cout << "A < B: " << (a2 < b2) << std::endl;
	std::cout << "A >= B: " << (a2 >= b2) << std::endl;
	std::cout << "A <= B: " << (a2 <= b2) << std::endl;
	std::cout << "A >= A: " << (a2 >= a2) << std::endl;
	std::cout << "B <= B: " << (b2 <= b2) << std::endl;
	std::cout << "A == B: " << (a2 == b2) << std::endl;
	std::cout << "B == B: " << (b2 == b2) << std::endl;
	std::cout << "A != B: " << (a2 != b2) << std::endl;
	std::cout << "B != B: " << (b2 != b2) << std::endl;

	std::cout << "B / 0: " << b2 / Fixed(0) << std::endl;

	return 0;
}
