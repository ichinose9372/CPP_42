/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/12 11:43:25 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string	cmd;
	phonebook	pb;

	while (1)
	{
		std::cout << "Please select and input a command" << std::endl;
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
