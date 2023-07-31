/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:43:43 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/31 16:16:25 by yichinos         ###   ########.fr       */
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
	const Animal *animal[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "--------------makesound-----------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		animal[i]->makeSound();
	}
	
	std::cout << "--------------destructor----------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animal[i];
	}
	std::cout << "---------------leaks--------------------------------" << std::endl;
	return 0;
}

__attribute__((destructor)) static void destructor()
{
    system("leaks -q a.out");
}