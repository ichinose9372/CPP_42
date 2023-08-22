/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:43:43 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/17 13:22:52 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	std::cout << "------------constructor----------------------------" << std::endl;
	const Dog dog;
	const Cat cat;
	std::cout << "--------------makesound-----------------------------" << std::endl;
	dog.makeSound();
	cat.makeSound();	
	std::cout << "--------------destructor----------------------------" << std::endl;
	return 0;
}

__attribute__((destructor)) static void destructor()
{
    system("leaks -q a.out");
}