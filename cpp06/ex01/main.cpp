/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:24:51 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/14 14:16:05 by yichinos         ###   ########.fr       */
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

    std::cout << GREEN << "Base address = " << NORMAL <<&my_birthday << std::endl;
    std::cout << "------- serialize --------" << std::endl;
    return1 = Serializer::serialize(&my_birthday);
    std::cout << GREEN << "return1 =  " << NORMAL << return1 << std::endl;

    std::cout << "------- deserialize --------" << std::endl;
    Data *tmp;
    tmp = Serializer::deserialize(return1);
    std::cout << GREEN << "Data *tmp = " << NORMAL << tmp << std::endl;

    return (0);
    
}