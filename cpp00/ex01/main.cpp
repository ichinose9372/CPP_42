/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/11 21:41:19 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string	cmd;
	phonebook	pb;

	while (1)
	{
		std::cout << "コマンドを選択して入力してください" << std::endl;
		std::cout << " - ADD \n - SEARCH \n - EXIT " << std::endl;
		std::cout<<"==> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			pb.add();
		else if ( cmd == "SEARCH")
			pb.printContact(); 
		else if (cmd == "EXIT")
		{
			std::cout<<"EXIT"<<std::endl;
			break;
		}
		else if (std::cin.eof())
			break;
		else
			std::cout<<"正しくありません。もう一度入力してください。\n";
	}
	return (0);
}
