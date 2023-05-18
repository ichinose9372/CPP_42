/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/18 13:12:24 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"
#include "contact.hpp"

static void title(void)
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << std::endl;
}

void all_view(std::string f_name, std::string l_name, std::string n_name, std::string phone_num, std::string d_secret)
{
	std::cout << "+--------------------------+\n";
	std::cout << "| FIRSRNAME  |   " << std::setw(10) << std::right << (f_name.size() > 10 ? f_name.substr(0,9) + '.' : f_name)<<"|\n";
	std::cout << "| LASTNAME   |   " << std::setw(10) << std::right << (l_name.size() > 10 ? l_name.substr(0,9) + '.' : l_name) << "|\n";
	std::cout << "| NICKNAME   |   " << std::setw(10) << std::right << (n_name.size() > 10 ? n_name.substr(0,9) + '.' : n_name) << "|\n";
	std::cout << "| TEL        |   " << std::setw(10) << std::right << (phone_num.size() > 10 ? phone_num.substr(0,9)+ '.' : phone_num) << "|\n";
	std::cout << "| SE CRET    |   " << std::setw(10) << std::right << (d_secret.size() > 10 ? d_secret.substr(0,9) + '.' : d_secret) << "|\n";
	std::cout << "+--------------------------+\n";
}


int main(void)
{
	std::string	cmd;
	phonebook	pb;

	title();
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
