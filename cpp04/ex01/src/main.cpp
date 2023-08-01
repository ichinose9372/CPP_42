/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:43:43 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/01 20:30:15 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	std::cout << "--------------------constructor----------------------------" << std::endl;
	const Animal *animal[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	std::cout << "---------------------makesound-----------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		animal[i]->getType();
		animal[i]->makeSound();
	}
	std::cout << "--------------------destructor----------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animal[i];
	}
	std::cout <<"\n---------------- Test deep copy -------------------- \n" << std::endl;
	std::cout <<"----------------------- Cat ----------------------------- \n" << std::endl;

	Cat old_cat;
	std::cout << "old_cat init ideas  = " << old_cat.getIdea(42) << std::endl;
	std::cout <<"\n ------------- change ideas (old_cat) -------------------- \n" << std::endl;
	old_cat.setIdea(42, "old old old old cat");
	Cat new_cat(old_cat);

	std::cout <<" -------------------- check deepcopy ----------------------------- \n" << std::endl;
	std::cout << "old_cat ideas  = " << old_cat.getIdea(42) << std::endl;
	std::cout << "new_cat ideas  = " << new_cat.getIdea(42) << std::endl;
	
	std::cout <<"\n--------------------- Dog ----------------------------- \n" << std::endl;

	Dog old_dog;
	std::cout << "old_dogold_dog init ideas  = " <<old_dog.getIdea(42) << std::endl;
	std::cout <<"\n-------------- change ideas (old_dogold_dog) -------------------- \n" << std::endl;
	old_dog.setIdea(42, "old old old old dog");
	Dog new_dog(old_dog);
	
	std::cout <<"------------------- check deepcopy ----------------------------- \n" << std::endl;
	std::cout << "old_dogold_dog ideas  = " <<old_dog.getIdea(42) << std::endl;
	std::cout << "old_dogold_dog2 ideas  = " <<new_dog.getIdea(42) << std::endl;

	std::cout << "----------------------leaks--------------------------------" << std::endl;
	return 0;
}

// __attribute__((destructor)) static void destructor()
// {
//     system("leaks -q a.out");
// }