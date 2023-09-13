
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:20:09 by yichinos          #+#    #+#             */
/*   Updated: 2023/08/24 16:23:38 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void test_scalaeconvert(char *str)
{
	std::cout << YELLOW <<"Test ( \" " << str << " \" )" << NORMAL << std::endl; 
	ScalarConverter::convert(str);
	std::cout << "-----------------------------------------------------------" << std::endl;
}

// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 	{
// 		std::cerr << "Error: wrong number of arguments" << std::endl;
// 		return (1);
// 	}
	
// 	ScalarConverter::convert(argv[1]);
	
// 	return (0);
// }

int main(void)
{
	char str0[] = "nan";
	test_scalaeconvert(str0);
	char str1[] = "42.0f";
	test_scalaeconvert(str1);
	char str2[] = "0";
	test_scalaeconvert(str2);
	char str3[] = "2147483647";
	test_scalaeconvert(str3);
	char str4[] = "2147483648";
	test_scalaeconvert(str4);
	char str5[] = "4.4444444444444444444";
	test_scalaeconvert(str5);
	char str6[] = "4.44444f";
	test_scalaeconvert(str6);
	char str7[] = "0.00000000000001";
	test_scalaeconvert(str7);
	char str8[] = "0000000000000000.0000001";
	test_scalaeconvert(str8);
	char str9[] = "nanf";
	test_scalaeconvert(str9);
	char str10[] = "10000000000000000000000000000000000000000";
	test_scalaeconvert(str10);

}