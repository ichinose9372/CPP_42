/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:46:17 by yichinos          #+#    #+#             */
/*   Updated: 2023/05/14 23:56:34 by ichinoseyuu      ###   ########.fr       */
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

void add_func(phonebook &pb)
{
	contact		n_contact;
	std::string	f_name,l_name,n_name,phone_num,d_secret;
	std::string serect;

	std::cout<<"追加する情報を入力してください\n";
	std::cout << "FIRSTNAME : ";
	std::cin >> f_name;
	std::cout<<"LASTNAME  : ";
	std::cin>>l_name;
	std::cout<<"NICKTNAME : ";
	std::cin>>n_name;
	while(1)
	{
		std::cout<<"TEL       : ";
		std::cin>>phone_num;
		if (n_contact.check_phonenum(phone_num))
			break;
		else
			std::cout<<"番号が正しくありません。\n";
	}
	std::cout << "SECRET    : ";
	std::cin>>d_secret;
	all_view(f_name,l_name,n_name,phone_num,d_secret);
	while(1)
	{
		std::cout<<"追加しますか？ ";
		std::cout<<"[YES / NO] : ";
		std::cin >> serect;
		if (serect.compare("yes")== 0 || serect.compare("YES") == 0 || serect.compare("y") == 0)
		{
			n_contact.setName(f_name,l_name,n_name);
			n_contact.setPhone_num(phone_num);
			n_contact.setDarkest_secret(d_secret);
			pb.addContact(n_contact);
			std::cout<<"\n\n追加しました\n\n";
			return ;
		}
		else if (serect.compare("NO") == 0 || serect.compare("no") == 0 || serect.compare("n") == 0)
		{
			std::cout<<"・\n・\n・\n破棄しました \\(^ O ^ ) /\n";
			return ;
		}
	}
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
		std::cin>>cmd;
		if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0)
			add_func(pb);
		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0)
		{
			if(pb.printContact() == 1)
			{
				std::cout<<"\n\nどの番号を表示しますか？ : ";
				std::cin>>cmd;
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
