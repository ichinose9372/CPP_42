/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:53:12 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/02 15:07:35 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

void printVector(std::vector<int> vec)
{
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << std::endl;
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
		std::vector<int> vec(10);
		std::list<int> list;
		std::deque<int> deq;
		for (int i = 0; i < 10; i++)
			vec[i] = i * 8;
		for (int i = 0; i < 10; i++)
			list.push_back(i * 4);
		for (int i = 0; i < 10; i++)
			deq.push_back(i * 2);
		std::cout << "-------------vec-------------" << std::endl;
		for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
			std::cout << *it << std::endl;
		int target1 = 64;
		int result1 = easyfind(vec, target1);
		if (result1 != -1) 
			std::cout << target1 << " is found at index " << result1 << std::endl;
		else 
			std::cout << target1 << " is not found." << std::endl;
		int target2 = 0;
		int result2 = easyfind(vec, target2);
		if (result2 != -1) 
			std::cout << target1 << " is found at index " << result2 << std::endl;
		else 
			std::cout << target1 << " is not found." << std::endl;
		int target3 = 320;
		int result3 = easyfind(vec, target3);
		if (result3 != -1) 
			std::cout << target1 << " is found at index " << result3 << std::endl;
		else 
			std::cout << target1 << " is not found." << std::endl;
		std::cout << "-----------list--------------" << std::endl;
		for(std::list<int>::iterator it = list.begin(); it != list.end(); it++)
			std::cout << *it << std::endl;
		int target4 = 20;
		int result4 = easyfind(list, target4);
		if (result4 != -1) 
			std::cout << target4 << " is found at index " << result4 << std::endl;
		else 
			std::cout << target4 << " is not found." << std::endl;
		int target5 = 0;
		int result5 = easyfind(list, target5);
		if (result5 != -1) 
			std::cout << target5 << " is found at index " << result5 << std::endl;
		else 
			std::cout << target5 << " is not found." << std::endl;
		int target6 = 320;
		int result6 = easyfind(list, target6);
		if (result6 != -1) 
			std::cout << target6 << " is found at index " << result6 << std::endl;
		else 
			std::cout << target6 << " is not found." << std::endl;
		std::cout << "-----------deque--------------" << std::endl;
		for(std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
			std::cout << *it << std::endl;
		int target7 = 12;
		int result7 = easyfind(deq, target7);
		if (result7 != -1) 
			std::cout << target7 << " is found at index " << result7 << std::endl;
		else 
			std::cout << target7 << " is not found." << std::endl;
		int target8 = 0;
		int result8 = easyfind(deq, target8);
		if (result8 != -1) 
			std::cout << target8 << " is found at index " << result8 << std::endl;
		else 
			std::cout << target8 << " is not found." << std::endl;
		int target9 = 320;
		int result9 = easyfind(deq, target9);
		if (result9 != -1) 
			std::cout << target9 << " is found at index " << result9 << std::endl;
		else 
			std::cout << target9 << " is not found." << std::endl;
	}
	return (0);
}
