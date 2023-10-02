/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:32:11 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/10/02 12:19:34 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : btc_data(other.btc_data)
{}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        btc_data  = other.btc_data;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

bool BitcoinExchange::init_csv_data(std::ifstream &ifs)
{
    std::string line;
    bool first_line = true;
    while (std::getline(ifs, line))
    {
        if (first_line)
        {
            first_line = false;
            continue;
        }
        std::istringstream stream(line);
        std::string date;
        std::string price;
        std::getline(stream, date, ',');
        std::getline(stream, price, '\n');
        std::istringstream(price) >> btc_data[date];
    }
    return true;
}

void BitcoinExchange::print_price(std::ifstream &ifs)
{
    std::string input_line;
    bool first_line = true;
    while (std::getline(ifs, input_line))
    {
        if (first_line)
        {
            first_line = false;
            continue;
        }
        std::istringstream stream(input_line);
        std::string date;
        std::string count;
        std::getline(stream, date, '|');
        std::getline(stream, count, '\n');
        double cnt;
        std::istringstream(count) >> cnt;
        if (!varidate(date, cnt))
            continue;
        if (serch_price(date, cnt) < 0)
           continue;
        else 
            std::cout << date << "=> " << cnt << " = " << serch_price(date, cnt) << std::endl;
    }
}

bool BitcoinExchange::varidate(std::string date, double cnt)
{
    if (!date_check(date))
    {
        std::cout << "Error: bad input => " << date <<std::endl;
        return false;
    }
    if (cnt < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (cnt > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    } 
    
    return true;
}


double BitcoinExchange::serch_price(std::string date, double &cnt)
{
    std::map<std::string, double>::iterator it = btc_data.lower_bound(date);
    if (it != btc_data.begin()) 
    {
        --it;
        double bitcoin_price = it->second;
        double result = bitcoin_price * cnt;
        return (result);
    } 
    else 
        return -1;   
}

bool BitcoinExchange::date_check(std::string date)
{
    //もし無効な日付であればfalseを返す
    if (date.length() != 11)
        return false;
    for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-' || date[i] != '-')
            {
				return false;
            }
		}
		else
		{
			if (!std::isdigit(date[i]))
				return false;
		}
	}
    int year, month, day;
	std::istringstream issYear(date.substr(0, 4));
	std::istringstream issMonth(date.substr(5, 2));
	std::istringstream issDay(date.substr(8, 2));
    issYear >> year;
    issMonth >> month;
    issDay >> day;
    if (year < 2000 || year > 2021)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
            return false;
    }
    if ((month == 2) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
    {
        
        if (year % 4 == 0)
        {
            if (day > 29)
                return false;
        }
        else
        {
            if (day > 28)
                return false;
        }
    }
    return true;
}