/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:35:16 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/09/11 15:31:34 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (0);
    }
    std::ifstream input_txt_ifs(argv[1]);
    if (!input_txt_ifs)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    std::ifstream data_file("data.csv");
    if (!data_file)
    {
        std::cerr<< "Error: could not open file (data.csv)" << std::endl;
    }

    BitcoinExchange btc;
    if (!btc.init_csv_data(data_file))
        return 1;
    btc.print_price(input_txt_ifs);
    input_txt_ifs.close();
    return (0);
    
}