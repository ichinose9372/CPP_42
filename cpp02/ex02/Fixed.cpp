/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:15:48 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/21 18:43:55 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	raw = 0;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	raw = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	raw = roundf(num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called"<< std::endl;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	 return (raw);
}

void Fixed::setRawBits(int const num)
{
	raw = num;
}

int Fixed::toInt(void) const
{
	return (raw >> fractional_bits);
}

float Fixed::toFloat(void) const
{
	return (float(raw) / float(1 << fractional_bits));
}

bool Fixed::operator>(const Fixed &other) const
{
	if (raw > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &other) const
{
	if (raw < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (raw >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (raw <= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &other) const
{
	if (raw == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (raw != other.getRawBits())
		return (true);
	return (false);
}	

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(this->raw + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(this->raw - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(this->raw / other.getRawBits() << fractional_bits);
	return (tmp);
}


Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->raw = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	// std::cout << "Multiplication operator called" << std::endl;
	Fixed tmp;
	tmp.setRawBits((this->raw * other.getRawBits()) >> fractional_bits);
	return (tmp);
}

Fixed &Fixed::operator++(void)
{
	this->raw++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->raw--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->raw--;
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->raw++;
	return (tmp);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
} 

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}