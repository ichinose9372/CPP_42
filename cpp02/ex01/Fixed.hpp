/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:09:51 by yichinos          #+#    #+#             */
/*   Updated: 2023/06/14 14:57:16 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FIXD_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					raw;
		static const int	fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
