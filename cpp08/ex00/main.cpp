/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:53:12 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/22 13:48:23 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"


template <typename Container>
void print_data(const Container& container) {
    int i = 0;
    typename Container::const_iterator it;
    for (it = container.begin(); it != container.end(); ++it) {
        std::cout << "index [ " << i << " ]  = " << *it << std::endl; // *it で要素の値を表示
        i++;
    }
    std::cout << "--------------------------------------------" << std::endl;
}


template <typename Container>
void test_func(const int num, const Container& container)
{
	typename Container::const_iterator it = easyfind(container, num);
	if (it != container.end())
		std::cout<< GREEN << num << " is found " << NORMAL <<std::endl ;
	else
		std::cout << RED << num <<  " is not found\n" << NORMAL;
}



int main(void)
{
	{
		std::cout << YELLOW <<"----- Test case (  vector  ) array_size = 10 -----" << NORMAL <<std::endl;
		std::vector<int> vec;

		//initialize 8 no baisuu
		for (int i = 0; i < 10; i++)
			vec.push_back(i * 8);
		print_data(vec);
		
		std::cout << "\n";
		//test
		try
		{
			test_func(72, vec);
			test_func(10000, vec);
			test_func(-1, vec);
			test_func(0, vec);
			test_func(2147483647, vec);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "\n";
		
		std::cout << YELLOW << "----- Test case (  list  ) list_size = 10 -----" << NORMAL <<std::endl;
		std::list<int> list;
		
		//initialize 4 baisuu
		for (int i = 0; i < 10; i++)
			list.push_back(i * 4);

		//print list
		print_data(list);
		std::cout << "\n";

		//test
		try
		{
			test_func(16, list);
			test_func(1024 , list);
			test_func(-1, list);
			test_func(0, list);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		

		std::cout << "\n";

	
		std::cout << YELLOW << "----- Test case (  deque  ) deque_size = 10 -----" << NORMAL <<std::endl;

		//initialize 2 no baisuu
		
		std::deque<int> deq;
		for (int i = 0; i < 10; i++)
			deq.push_back(i * 11);

		print_data(deq);
		std::cout << "\n";

		//test
		try
		{
			test_func(11, deq);
			test_func(2147483647 , deq);
			test_func(-1, deq);
			test_func(0, deq);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	{
		std::cout << YELLOW << "----- Test case (  vector  ) array_size = 0 -----" << NORMAL <<std::endl;
		std::vector<int> vec(0);
		std::cout << "\n";
		try
		{
			test_func(72, vec);
			test_func(10000, vec);
			test_func(-1, vec);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "----- Test case (  list  ) list_size = 2147483648 -----" << NORMAL <<std::endl;
		std::list<int> list;
		for (size_t i = 0; i < 20000; i++)
			list.push_back(i * 1);
		std::cout << "\n";
		try
		{
			test_func(72, list);
			test_func(10000, list);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << '\n'<<std::endl;
	return (0);
}
