/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:07:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 21:59:33 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point 
{
    private :
        const float x;
        const float y;
    public :
        Point();
        Point(float x, float y);
        Point(const Point &other);
        Point &operator=(const Point &other);
        ~Point();
        float getX() const;
        float getY() const;
};

#endif