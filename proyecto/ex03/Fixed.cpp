/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <damedina@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:07:13 by damedina          #+#    #+#             */
/*   Updated: 2025/11/08 19:02:51 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	number = 0;
}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int &value)
{
	number = value << fractionalBits;
}

Fixed::Fixed(const float &value)
{
	number = roundf(value * (1 << fractionalBits));
}

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const
{
	return (number);
}

void Fixed::setRawBits(int const raw)
{
	number = raw;
}

float Fixed::toFloat(void) const
{
	return (((float) number) / ((float) (1 << fractionalBits)));
}

int Fixed::toInt(void) const
{
	return (number >> fractionalBits);
}

Fixed &Fixed::operator=(const Fixed &value)
{
	if (this != &value)
		number = value.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (number > fixed.number);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (number < fixed.number);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (number >= fixed.number);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (number <= fixed.number);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (number == fixed.number);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (number != fixed.number);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed result;
	result.number = number + fixed.number;
	return (result);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed result;
	result.number = number - fixed.number;
	return (result);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed result;
	result.number = (number * fixed.number) >> fractionalBits;
	return (result);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed result;
	result.number = (number << fractionalBits) / fixed.number;
	return (result);
}

Fixed &Fixed::operator++()
{
	++number;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed prev = *this;
	++number;
	return (prev);
}

Fixed &Fixed::operator--()
{
	--number;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed prev = *this;
	--number;
	return (prev);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &value)
{
	os << value.toFloat();
	return (os);
}
