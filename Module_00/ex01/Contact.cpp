/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:36:35 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/13 14:38:12 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>


Contact::Contact(){
	return ;
}

Contact::~Contact(){
	return ;
}

void    Contact::print_full_contact(void){

	std::cout << "\n**************************************"<< std::endl; 
	std::cout << "First Name     : " << Name << std::endl; 
	std::cout << "Last Name      : " << LastName << std::endl; 
	std::cout << "NickName       : " << Nickname << std::endl; 
	std::cout << "Darkest Secret : " << Secret << std::endl; 
	std::cout << "Phone Number   : " << Tel_number << std::endl;
	std::cout << "**************************************\n"<< std::endl; 
}


void    Contact::print_case(std::string str){
	
	int i = 0;
	
	if (std::strlen(str.c_str()) < 10){
		std::cout.width(10);
		std::cout << str;
	}
	
	else if (std::strlen(str.c_str()) == 10){
		while (i < 10 && str[i]){
			std::cout << str[i];
			i++;
		}
	}
	
	else{
		while (i < 9 && str[i]){
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	std::cout << "|";
}

void	Contact::print_contact(int j){

	std::cout.width(10);
	std::cout << j + 1 << "|";
	print_case(Name);
	print_case(LastName);
	print_case(Nickname);
	std::cout << std::endl;
}



int Contact::add_contact(void){
	
	std::cout << "Enter First Name        : ";
	std::cin >> Name;
	if(std::cin.eof() == true){
		std::cout << "Bye" << std::endl;
		return(1);
	}
	
	std::cout << "Enter Last Name         : ";
	std::cin >> LastName;
	if(std::cin.eof() == true){
		std::cout << "Bye" << std::endl;
		return(1);
	}
	
	std::cout << "Enter NickName          : ";
	std::cin >> Nickname;
	if(std::cin.eof() == true){
		std::cout << "Bye" << std::endl;
		return(1);
	}
	
	std::cout << "Enter a Darkest Secret  : ";
	std::cin >> Secret;
	if(std::cin.eof() == true){
		std::cout << "Bye" << std::endl;
		return(1);
	}
	
	std::cout << "Enter a Telephone Number: ";
	std::cin >> Tel_number;
	if(std::cin.eof() == true){
		std::cout << "Bye" << std::endl;
		return(1);
	}
	return (0);
}