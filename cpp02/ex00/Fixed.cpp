/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:01 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/11 12:51:08 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "copy constructor called" << std::endl;
	this->raw = other.getRawBits();
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

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->setRawBits(other.getRawBits());
	}
	return	(*this);
}
