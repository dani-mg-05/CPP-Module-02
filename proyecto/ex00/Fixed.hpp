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

class Fixed {
	private:
		int number;
		static const int fractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &value);
		~Fixed(void);
		Fixed &operator=(const Fixed &value);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
