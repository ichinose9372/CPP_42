/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:53:12 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/19 14:09:13 by yichinos         ###   ########.fr       */
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
void test_func(int num, const Container &conteiner)
{
	int result;

	result = easyfind(conteiner, num);
	if (result == -1)
	{
		std::cout << RED << num << " is not found." << NORMAL << std::endl;
		return ;
	}
	std::cout << GREEN <<num << " is found at index " << result << NORMAL << std::endl;
	
}

int main(void)
{
	// {
	// 	std::vector<int> vec(5, 8);// 5個の8で初期化
	// 	std::cout << "vec(5, 8)" << std::endl;
	// 	printVector(vec);
	// 	vec.insert(vec.begin(), 3, 2);// 3個の2を先頭に挿入
	// 	std::cout << "insert" << std::endl;
	// 	printVector(vec);
	// 	vec.pop_back(); // 末尾を削除
	// 	std::cout << "pop_back" << std::endl;
	// 	printVector(vec);
	// 	vec.resize(5); // 5個に縮小
	// 	std::cout << "resize(5)" << std::endl;
	// 	printVector(vec);
	// 	vec.resize(8, 3);// 8個に拡張し、3で埋める
	// 	std::cout << "resize(8, 3)" << std::endl;
	// 	printVector(vec);
	// 	vec.clear(); // 全削除
	// 	std::cout << "clear" << std::endl;
	// 	printVector(vec);
	// }
	{
		std::cout << YELLOW <<"----- Test case (  vector  ) array_size = 10 -----" << NORMAL <<std::endl;
		std::vector<int> vec(10);

		//initialize 8 no baisuu
		for (int i = 0; i < 10; i++)
			vec[i] = i * 8;
		print_data(vec);
		
		std::cout << "\n";
		//test
		test_func(16, vec);
		test_func(1024 , vec);
		test_func(-1, vec);
		test_func(0, vec);
		
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
		test_func(16, list);
		test_func(1024 , list);
		test_func(-1, list);
		test_func(0, list);

		std::cout << "\n";

	
		std::cout << YELLOW << "----- Test case (  deque  ) deque_size = 10 -----" << NORMAL <<std::endl;

		//initialize 2 no baisuu
		
		std::deque<int> deq;
		for (int i = 0; i < 10; i++)
			deq.push_back(i * 11);

		print_data(deq);
		std::cout << "\n";

		test_func(11, deq);
		test_func(2147483647 , deq);
		test_func(-1, deq);
		test_func(0, deq);
	}
	return (0);
}
