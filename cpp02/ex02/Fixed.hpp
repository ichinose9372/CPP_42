/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:15:42 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/02 14:18:57 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					raw;
		static const int	fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);
		~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const num);
	int toInt(void) const;
	Fixed &operator=(const Fixed &other);
	Fixed &operator*(const Fixed &other);
	float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &os, const Fixed &other);
#endif