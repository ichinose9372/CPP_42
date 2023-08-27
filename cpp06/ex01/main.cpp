/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:24:51 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/08/27 21:52:03 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
    Data my_birthday;

    my_birthday.month = 7;
    my_birthday.date = 20;
    my_birthday.day = "Wednesday";

    uintptr_t   return1;

    std::cout << &my_birthday << std::endl;
    return1 = Serializer::serialize(&my_birthday);
    std::cout << return1 << std::endl;

    Data *tmp;
    tmp = Serializer::deserialize(return1);
    std::cout << tmp << std::endl;
    return (0);
    
}