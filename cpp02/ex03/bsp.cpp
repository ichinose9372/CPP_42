/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:38:19 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 22:06:53 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

class Point;

//ptint triangle


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float ab_x = b.getX() - a.getX();
    float ab_y = b.getY() - a.getY();
    Point ab(ab_x, ab_y);

    float bc_x = c.getX() - b.getX();
    float bc_y = c.getY() - b.getY();
    Point bc(bc_x, bc_y);

    float ca_x = a.getX() - c.getX();
    float ca_y = a.getY() - c.getY();
    Point ca(ca_x, ca_y);

    // ベクトル bp, cp, ap の計算
    float bp_x = point.getX() - b.getX();
    float bp_y = point.getY() - b.getY();
    Point bp(bp_x, bp_y);

    float cp_x = point.getX() - c.getX();
    float cp_y = point.getY() - c.getY();
    Point cp(cp_x, cp_y);

    float ap_x = point.getX() - a.getX();
    float ap_y = point.getY() - a.getY();
    Point ap(ap_x, ap_y);

    // 外積を計算
    float c1 = ab.getX() * bp.getY() - ab.getY() * bp.getX();
    float c2 = bc.getX() * cp.getY() - bc.getY() * cp.getX();
    float c3 = ca.getX() * ap.getY() - ca.getY() * ap.getX();

    // 判定
    if ((c1 > 0 && c2 > 0 && c3 > 0) || (c1 < 0 && c2 < 0 && c3 < 0))
        return true;

    return false;
}


