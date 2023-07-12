/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:32:00 by yichinos          #+#    #+#             */
/*   Updated: 2023/07/11 21:51:27 by ichinoseyuu      ###   ########.fr       */
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
	int	i;
	static int index = 0;
	
	for (i = 0; i < 8; i++)
	{
		if (arry[i].get_Data("first_name") == "" || 
			arry[i].get_Data("last_name") == "" ||
			arry[i].get_Data("nick_name") == "" ||
			arry[i].get_Data("phone_num") == "" ||
			arry[i].get_Data("darkest_secret") == "")
		{
			arry[i] = new_contact;
			std::cout <<"\nadding complete\n\n";
			return;
		}
	}
	arry[index] = new_contact;
	index++;
	if (index == 8)
		index = 0;
}

void phonebook::printContact()
{
	int			i;
	std::string cmd;

	i = 0;
	if (arry[i].get_Data("first_name") == "")
		std::cout << " no contact \n";
	for(i = 0; i <= 8; i++)
	{
		if (arry[i].get_Data("first_name") == "" || i == 8)
			return;
		std::cout << std::setw(10)<<std::right<< i + 1 << "|";
		std::cout <<std::setw(13)<<std::right<<(arry[i].get_Data("first_name").size()>10 ? arry[i].get_Data("first_name").substr(0,9)+"." : arry[i].get_Data("first_name"))<< '|';
		std::cout <<std::setw(13)<<std::right<<(arry[i].get_Data("last_name").size()>10 ? arry[i].get_Data("last_name").substr(0,9)+"." : arry[i].get_Data("last_name"))<< '|';
		std::cout <<std::setw(13)<<std::right<<(arry[i].get_Data("nick_name").size()>10 ? arry[i].get_Data("nick_name").substr(0,9)+"." : arry[i].get_Data("nick_name"))<< '|' << std::endl;
	}
	return ;
}

// void phonebook::printContact_num(std::string cmd)
// {
// 	int	num;
// 	std::istringstream iss(cmd);

// 	if (!(iss >> num))
// 	{
// 		std::cout << "\n\n\n番号が正しくありません\n\n\n";
// 		return;
// 	}
// 	for(int i = 0; i < 8; i++)
// 	{
// 		if (i + 1 == num)
// 		{
// 			if (arry[i].getFirst_name() == "")
// 			{
// 				std::cout << "\n\n\n番号が正しくありません\n\n\n";
// 				return ;
// 			}
// 			else
// 			{
// 				std::cout << "+-------------------------------\n";
// 				std::cout<<"| FIRSTNAME : "<<arry[i].getFirst_name()<<'\n';
// 				std::cout<<"| LASTNAME  : "<<arry[i].getLast_name()<<'\n';
// 				std::cout<<"| NICKNAME  : "<<arry[i].getNick_name()<<'\n';
// 				std::cout<<"| TEL       : "<<arry[i].getPhoneNumber()<<'\n';
// 				std::cout<<"| SECRET    : "<<arry[i].getDarkesr_secret()<<'\n';
// 				std::cout << "+-------------------------------\n";
// 				return ;
// 			}
// 		}
// 	}
// 	std::cout << "\n\n\n番号が正しくありません\n\n\n";
// }

// int	phonebook::add_func(void)
// {
// 	contact		new_contact;
// 	std::string	f_name,l_name,n_name,phone_num,d_secret;
// 	std::string num;

// 	while(1)
// 	{	
// 		std::cout << "FIRSTNAME : ";
// 		if (inputandcheck(f_name))
// 			return (1);
// 		if (f_name.empty())
// 			continue;
// 		std::cout<<"LASTNAME  : ";
// 		if (inputandcheck(l_name))
// 			return (1);
// 		if (l_name.empty())
// 			continue;
// 		std::cout<<"NICKTNAME : ";
// 		if (inputandcheck(n_name))
// 			return (1);
// 		if (n_name.empty())
// 			continue;
// 		break;
// 	}
// 	while(1)
// 	{
// 		std::cout<<"TEL       : ";
// 		if (inputandcheck(phone_num))
// 			return (1);
// 		if (phone_num.empty())
// 			continue;
// 		if (n_contact.check_phonenum(phone_num))
// 			break;
// 		else
// 			std::cout<<"番号が正しくありません。\n";
// 	}
// 	while (1)
// 	{
// 		std::cout << "SECRET    : ";
// 		if (inputandcheck(d_secret))
// 			return (1);
// 		if (d_secret.empty())
// 			continue;
// 		break;
// 	}
// 	all_view(f_name,l_name,n_name,phone_num,d_secret);
// 	while(1)
// 	{
// 		std::cout<<"追加しますか？ ";
// 		std::cout<<"[YES / NO] : ";
// 		if (inputandcheck(secret))
// 			return (1);
// 		if (secret.compare("yes")== 0 || secret.compare("YES") == 0 || secret.compare("y") == 0)
// 		{
// 			n_contact.setName(f_name,l_name,n_name);
// 			n_contact.setPhone_num(phone_num);
// 			n_contact.setDarkest_secret(d_secret);
// 			pb.addContact(n_contact);
// 			std::cout<<"\n\n追加しました\n\n";
// 			return (0);
// 		}
// 		else if (secret.compare("NO") == 0 || secret.compare("no") == 0 || secret.compare("n") == 0)
// 		{
// 			std::cout<<"・\n・\n・\n破棄しました \\(^ O ^ ) /\n";
// 			return (0);
// 		}
// 	}
// }
void phonebook::input(std::string type, std::string data, contact &new_contact)
{
	while (1)
	{
		std::cout << type << " : ";
		std::getline(std::cin, data);
		if (std::cin.eof())
		{
			std::cout<< "入力エラー\n";
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