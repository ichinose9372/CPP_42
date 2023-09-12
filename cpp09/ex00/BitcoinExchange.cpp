/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:32:11 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/11 16:22:34 by ichinoseyuu      ###   ########.fr       */
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
        try
        {
            btc_data[date] = std::stod(price);
        }
        catch(const std::out_of_range)
        {
            std::cerr << "Error: out of range." << std::endl;
            return false;
        }
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
        double cnt = std::stod(count);
        if (!this->varid(date, cnt))
            continue;
        if (serch_price(date, cnt) < 0)
           continue;
        else 
            std::cout << date << "=> " << cnt << " = " << serch_price(date, cnt) << std::endl;
    }
}

bool BitcoinExchange::varid(std::string data, double count)
{
    if (count < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (count > INT_MAX)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    (void) data;
    // if (this->data_check(data))
    // {
    //     std::count << "Error : bad input => " << data << std::endl;
    // }
    return true;
}


double BitcoinExchange::serch_price(std::string date, double &cnt)
{
    
    std::map<std::string, double>::iterator it = this->btc_data.lower_bound(date);
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