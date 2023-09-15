/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:17:18 by yichinos          #+#    #+#             */
/*   Updated: 2023/09/14 22:03:04 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

void printTriangle(const Point a, const Point b, const Point c, const Point p);
bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);
    Point p(3, 3);
    
    printTriangle(a, b, c, p);
    std::cout << std::endl;

    return (0);
}