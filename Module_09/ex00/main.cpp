/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:37:41 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/04 14:23:15 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include "BitcoinExchange.hpp"
#include "colors.h"

std::string MakeFiletoString(void)
{
    std::ifstream file("data.csv");
    std::string content;
    std::string line;

    if (file.is_open() == true)
    {
        std::getline(file, line);

        while (getline(file, line))
        {
            content += line + '\n';
        }
        file.close();
    }
    else
    {
        std::cout << "Error : Missing 'data.csv'" << std::endl;
        return ("ERROR");
    }
    return (content);    
}

int main(int argc, char** argv)
{
	if (argc != 2)
		return (std::cout << "ERROR\nBad Arguments" << std::endl, -1);
			
	std::string content = MakeFiletoString();
	if (content == "ERROR")
	    return (-1);
	
	BitcoinExchange btc;
	
	btc.MakeMapData(content);    
	btc.MakeExchange(argv[1]);
	return (0);
}