/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/09 21:34:23 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
	std::string	cmd;
	phonebook	pb;

	while (1)
	{
		std::cout << "コマンドを選択して入力してください\n";
		std::cout << " - ADD \n - SEARCH \n - EXIT \n";
		std::cout<<"==> ";
		if (pb.inputandcheck(cmd))
			return (0);
		if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0)
		{
			if (pb.add_func(pb))
				return (0);
		}
		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0)
		{
			if(pb.printContact() == 1)
			{
				std::cout<<"\n\nどの番号を表示しますか？ : ";
				if (pb.inputandcheck(cmd))
					break;
				pb.printContact_num(cmd);
			}
			else
				std::cout<<"\n連絡先がありません\n\n";
		}
		else if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0)
		{
			std::cout<<"EXIT"<<std::endl;
			break ;
		}
		else
			std::cout<<"正しくありません。もう一度入力してください。\n";
	}
	return (0);
}
