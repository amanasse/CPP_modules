/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:12 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 11:20:30 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "adresse de str : " << &str << std::endl;
	std::cout << "adresse de ptr : " << stringPTR << std::endl;
	std::cout << "adresse de ref : " << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << "str : " << str << std::endl;
	std::cout << "ptr : " << *stringPTR << std::endl;
	std::cout << "ref : " << stringREF << std::endl;
    return (0);
}