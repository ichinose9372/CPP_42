/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:32:37 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 19:28:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    std::cout << "default constructor called " << std::endl;
}

Point::Point(float x, float y) : x(x), y(y)
{
    std::cout << "float construntot called" << std::endl;
}

Point::Point(const Point &other) : x(other.getX()), y(other.getY())
{
    (void) other;
    std::cout << "copy constructor called" << std::endl;
}

Point& Point::operator=(const Point &other)
{
    (void) other;
    return *this;
}

Point::~Point()
{
    std::cout << "destructor called" << std::endl;
}

float Point::getX() const
{
    return this->x;
}

float Point::getY() const
{
    return this->y;
}
