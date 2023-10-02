/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:15:41 by yichinos          #+#    #+#             */
/*   Updated: 2023/10/02 11:37:18 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <iostream>
#include <iostream>
#include <sstream>
#include <regex>

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange& operator=(const BitcoinExchange &other);
        ~BitcoinExchange();
        bool init_csv_data(std::ifstream &ifs);
        void print_price(std::ifstream &ifs);
        bool varidate(std::string date, double cnt);
        double serch_price(std::string date, double &cnt);
        bool date_check(std::string date);
    private:
        std::map <std::string, double> btc_data;
};


#endif
