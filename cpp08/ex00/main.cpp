/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:53:12 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/01 22:59:18 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

template <typename T>
int easyfind(const T& container, int num)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator end = container.end();
    int index = 0;

    while (it != end) {
        if (*it == num)
            return index;
        ++it;
        ++index;
    }

    // 要素が見つからなかった場合、エラーコードを返す（例: -1）
    return -1;
}

int main()
{
    // 整数のベクターを作成
    std::vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(i * 10);
    }

    // ベクター内で整数を検索
    int target = 30;
    int result = easyfind(numbers, target);

    if (result != -1) {
        std::cout << "整数 " << target << " はインデックス " << result << " にあります。" << std::endl;
    } else {
        std::cout << "整数 " << target << " は見つかりませんでした。" << std::endl;
    }

    return 0;
}
