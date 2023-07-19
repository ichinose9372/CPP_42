/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:43:43 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/19 15:27:36 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	{
		//make animalclass arry[100]
		const Animal* animal[100];
		for (int i = 0; i < 100; i++)
		{
			if (i < 50)
				animal[i] = new Dog();
			else
				animal[i] = new Cat();
		}
	}
	// {
	// 	const WrongAnimal* metameta = new WrongAnimal();
	// 	const WrongAnimal* jj = new WrongCat();
	// 	std::cout << metameta->getType() << " " << std::endl;
	// 	std::cout << jj->getType() << " " << std::endl;
	// 	jj->makeSound();
	// 	metameta->makeSound();
	// 	delete metameta;
	// 	delete jj;
	// }
	return 0;
}