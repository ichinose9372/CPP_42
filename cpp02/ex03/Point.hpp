/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:07:06 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 19:22:39 by yichinos         ###   ########.fr       */
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