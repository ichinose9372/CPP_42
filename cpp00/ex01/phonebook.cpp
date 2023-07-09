/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:32:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/09 22:11:14 by ichinoseyuu      ###   ########.fr       */
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

int	phonebook::inputandcheck(std::string &name)
{
	std::getline(std::cin, name);
	if (std::cin.eof())
	{
		std::cout<< "入力エラー\n";
		return (1);
	}
	return (0);
}


void phonebook::addContact(const contact &new_contact)
{
	int	i;
	static int index = 0;
	
	for (i = 0; i < 8; i++)
	{
		if (arry[i].getFirst_name() == "")
		{
			arry[i] = new_contact;
			return;
		}
	}
	arry[index] = new_contact;
	index++;
	if (index == 8)
		index = 0;
}

int phonebook::printContact()
{
	int	i;

	i = 0;
	if (arry[i].getFirst_name() == "")
		return(0);
	std::cout << "+------------------------------------------------------------------+\n";
	for(i = 0; i <= 8; i++)
	{
		if (arry[i].getFirst_name() == "" || i == 8)
		{
			std::cout << "+------------------------------------------------------------------+\n";
			return (1);
		}
		else
		{
			std::cout << "|"<<std::setw(10)<<std::right<<i + 1<<'|';
			std::cout <<std::setw(13)<<std::right<<(arry[i].getFirst_name().size()>10 ? arry[i].getFirst_name().substr(0,9)+"." : arry[i].getFirst_name())<<'|';
			std::cout <<std::setw(13)<<std::right<<(arry[i].getLast_name().size()>10 ? arry[i].getLast_name().substr(0,9)+"." : arry[i].getLast_name())<<'|';
			std::cout <<std::setw(13)<<std::right<<(arry[i].getNick_name().size()>10 ? arry[i].getNick_name().substr(0,9)+"." : arry[i].getNick_name())<<'|';
			std::cout <<std::setw(13)<<std::right<<(arry[i].getPhoneNumber().size()>10 ? arry[i].getPhoneNumber().substr(0,9)+"." : arry[i].getPhoneNumber())<<"|\n";
		}
	}
	return (1);
}

void phonebook::printContact_num(std::string cmd)
{
	int	num;
	std::istringstream iss(cmd);

	if (!(iss >> num))
	{
		std::cout << "\n\n\n番号が正しくありません\n\n\n";
		return;
	}
	for(int i = 0; i < 8; i++)
	{
		if (i + 1 == num)
		{
			if (arry[i].getFirst_name() == "")
			{
				std::cout << "\n\n\n番号が正しくありません\n\n\n";
				return ;
			}
			else
			{
				std::cout << "+-------------------------------\n";
				std::cout<<"| FIRSTNAME : "<<arry[i].getFirst_name()<<'\n';
				std::cout<<"| LASTNAME  : "<<arry[i].getLast_name()<<'\n';
				std::cout<<"| NICKNAME  : "<<arry[i].getNick_name()<<'\n';
				std::cout<<"| TEL       : "<<arry[i].getPhoneNumber()<<'\n';
				std::cout<<"| SECRET    : "<<arry[i].getDarkesr_secret()<<'\n';
				std::cout << "+-------------------------------\n";
				return ;
			}
		}
	}
	std::cout << "\n\n\n番号が正しくありません\n\n\n";
}

int	phonebook::add_func(phonebook &pb)
{
	contact		n_contact;
	std::string	f_name,l_name,n_name,phone_num,d_secret;
	std::string secret;

	std::cout<<"追加する情報を入力してください\n";
	while(1)
	{	
		std::cout << "FIRSTNAME : ";
		if (inputandcheck(f_name))
			return (1);
		if (f_name.empty())
			continue;
		std::cout<<"LASTNAME  : ";
		if (inputandcheck(l_name))
			return (1);
		if (l_name.empty())
			continue;
		std::cout<<"NICKTNAME : ";
		if (inputandcheck(n_name))
			return (1);
		if (n_name.empty())
			continue;
		break;
	}
	while(1)
	{
		std::cout<<"TEL       : ";
		if (inputandcheck(phone_num))
			return (1);
		if (phone_num.empty())
			continue;
		if (n_contact.check_phonenum(phone_num))
			break;
		else
			std::cout<<"番号が正しくありません。\n";
	}
	while (1)
	{
		std::cout << "SECRET    : ";
		if (inputandcheck(d_secret))
			return (1);
		if (d_secret.empty())
			continue;
		break;
	}
	all_view(f_name,l_name,n_name,phone_num,d_secret);
	while(1)
	{
		std::cout<<"追加しますか？ ";
		std::cout<<"[YES / NO] : ";
		if (inputandcheck(secret))
			return (1);
		if (secret.compare("yes")== 0 || secret.compare("YES") == 0 || secret.compare("y") == 0)
		{
			n_contact.setName(f_name,l_name,n_name);
			n_contact.setPhone_num(phone_num);
			n_contact.setDarkest_secret(d_secret);
			pb.addContact(n_contact);
			std::cout<<"\n\n追加しました\n\n";
			return (0);
		}
		else if (secret.compare("NO") == 0 || secret.compare("no") == 0 || secret.compare("n") == 0)
		{
			std::cout<<"・\n・\n・\n破棄しました \\(^ O ^ ) /\n";
			return (0);
		}
	}
}
