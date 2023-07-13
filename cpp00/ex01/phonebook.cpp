/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:32:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/12 11:41:11 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void phonebook::all_view(std::string f_name, std::string l_name, std::string n_name, std::string phone_num, std::string d_secret)
{
	std::cout << "+--------------------------+\n";
	std::cout << "| FIRSRNAME  |   " << std::setw(10) << std::right << (f_name.size() > 10 ? f_name.substr(0,9) + '.' : f_name)<<"|\n";
	std::cout << "| LASTNAME   |   " << std::setw(10) << std::right << (l_name.size() > 10 ? l_name.substr(0,9) + '.' : l_name) << "|\n";
	std::cout << "| NICKNAME   |   " << std::setw(10) << std::right << (n_name.size() > 10 ? n_name.substr(0,9) + '.' : n_name) << "|\n";
	std::cout << "| TEL        |   " << std::setw(10) << std::right << (phone_num.size() > 10 ? phone_num.substr(0,9)+ '.' : phone_num) << "|\n";
	std::cout << "| SECRET     |   " << std::setw(10) << std::right << (d_secret.size() > 10 ? d_secret.substr(0,9) + '.' : d_secret) << "|\n";
	std::cout << "+--------------------------+\n";
}

void phonebook::addContact(const contact &new_contact)
{
	static int index;

	if (index == 8)
		index = 0;
	arry[index] = new_contact;
	index++;
	std::cout <<"\nadding complete\n\n";
}

int phonebook::choose_contact(void)
{
	std::string cmd;

	std::cout << "\n\nchoose contact number\n";
	std::cout << ">> ";
	std::getline(std::cin, cmd);
	if (cmd.empty())
		std::exit(1);
	if (cmd.size() != 1 || cmd[0] < '1' || cmd[0] > '8')
	{
		std::cout << "\n\nERROR\n\n";
		return (0);
	}
	return (cmd[0] - '0');
}

void phonebook::printContact()
{
	int			i;
	std::string cmd;
	int			num;

	i = 0;
	if (arry[i].get_Data("first_name") == "")
		std::cout << "\n\n no contact \n\n";
	std::cout << "+--index--+--firstname--+--lastname---+--nickname---+\n";	
	for(i = 0; i <= 8; i++)
	{
		if (arry[i].get_Data("first_name") == "" || i == 8)
			break;
		std::cout << std::setw(10)<<std::right<< i + 1 << "|";
		std::cout <<std::setw(13)<<std::right<<(arry[i].get_Data("first_name").size()>10 ? arry[i].get_Data("first_name").substr(0,9)+"." : arry[i].get_Data("first_name"))<< '|';
		std::cout <<std::setw(13)<<std::right<<(arry[i].get_Data("last_name").size()>10 ? arry[i].get_Data("last_name").substr(0,9)+"." : arry[i].get_Data("last_name"))<< '|';
		std::cout <<std::setw(13)<<std::right<<(arry[i].get_Data("nick_name").size()>10 ? arry[i].get_Data("nick_name").substr(0,9)+"." : arry[i].get_Data("nick_name"))<< '|' << std::endl;
	}
	num = choose_contact();
	if (num == 0)
		return;
	printContact_num(num);
	
}

void phonebook::printContact_num(int num)
{
	(void) num;
	for(int i = 0; i < 8; i++)
	{
		if (i == num - 1 && arry[num - 1].get_Data("first_name") == "")
		{
			std::cout << "\n\n no contact \n\n";
			return ;
		}
		if (i == num - 1 && arry[num - 1].get_Data("first_name") != "")
		{
			std::cout << "+-------------------------------\n";
			std::cout<<"| FIRSTNAME : "<<arry[i].get_Data("first_name")<<'\n';
			std::cout<<"| LASTNAME  : "<<arry[i].get_Data("last_name")<<'\n';
			std::cout<<"| NICKNAME  : "<<arry[i].get_Data("nick_name")<<'\n';
			std::cout<<"| TEL       : "<<arry[i].get_Data("phone_num")<<'\n';
			std::cout<<"| SECRET    : "<<arry[i].get_Data("darkest_secret")<<'\n';
			std::cout << "+-------------------------------\n";
			return ;
		}
	}
}

void phonebook::input(std::string type, std::string data, contact &new_contact)
{
	while (1)
	{
		std::cout << type << " : ";
		std::getline(std::cin, data);
		if (std::cin.eof())
		{
			std::cout<< "ERROR\n";
			std::exit(1);
		}
		if (type == "phone_num" && !new_contact.check_phonenum(data))
		{
			std::cout << " !! error !! please again \n";
			continue;
		}
		if (data.empty())
		{
			std::cout << " !! error !! please again \n";	
			continue;
		}
		break;
	}
	new_contact.set_Data(type, data);
}


void phonebook::add(void)
{
	contact		new_contact;
	std::string		f_name,l_name,n_name,phone_num,d_secret;
	std::string		num;
	
	while (1)
	{
		input("first_name", f_name, new_contact);
		input("last_name", l_name, new_contact);
		input("nick_name", n_name, new_contact);
		input("phone_num", phone_num, new_contact);
		input("darkest_secret", d_secret, new_contact);
		break;
	}
	addContact(new_contact);
}