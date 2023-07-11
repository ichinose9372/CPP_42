/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/11 12:50:36 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	raw = roundf(num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &other) : raw(other.raw)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	 return (raw);
}

void Fixed::setRawBits(int const num)
{
	raw = num;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->raw = other.raw;
	return	(*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}

int Fixed::toInt(void) const
{
	return (raw >> fractional_bits);
}

float Fixed::toFloat(void) const
{
	return (float(raw) / float(1 << fractional_bits));
}
