/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damedina <damedina@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:02:29 by damedina          #+#    #+#             */
/*   Updated: 2025/11/08 19:02:32 by damedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int number;
		static const int fractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &value);
		Fixed(const int &value);
		Fixed(const float &value);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator=(const Fixed &value);
};

std::ostream &operator<<(std::ostream &os, const Fixed &value);

#endif
