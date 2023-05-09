/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:54:09 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/17 15:59:42 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <unistd.h>
#include "Contact.hpp"
#include <stdlib.h>


PhoneBook::PhoneBook(){
	this->_i = 0;
	this->_count = 0;
	return ;
}

PhoneBook::~PhoneBook(){
	return ;
}

void 	PhoneBook::search(void){
	int j = 0;
	std::string	index;

    std::cout << "     index|" << "First Name|" << " Last Name|" << "  NickName|" << std::endl; 
	
	while (j < this->_count){
		_Contact[j].print_contact(j);
		j++;
	}
	std::cout << std::endl;
	
	std::cout << "Type an Index between 1 and 8 : " << std::endl;
	std::cin >> index;
	_index = atoi(index.c_str());
	if(std::cin.eof() == true)
	{
		std::cout << "Bye" << std::endl;
		exit(1);
	}
	
	while (_index < 1 || _index > this->_count){
		if(_index > this->_count)
		{
			if(_index > 8)
				std::cout << "Type an index between 1 and 8 : " << std::endl;
			else
				std::cout << "Retry Please, this index doesn't exist yet..." << std::endl;
		}
		else	
			std::cout << "Type an index between 1 and 8 : " << std::endl;
		std::cin >> index;
		_index = atoi(index.c_str());
		if(std::cin.eof() == true)
		{
			std::cout << "Bye" << std::endl;
			exit(1);
		}
	}
	_Contact[_index - 1].print_full_contact();
}

void	PhoneBook::choice(void){
	
	std::string	choice;
	
	std::cout << "type ADD, SEARCH or EXIT." << std::endl;
	std::cin >> choice;
	std::cout << choice << std::endl;
	if (choice == "ADD"){
		if (this->_i == 8)
			this->_i = 0;
		if (_Contact[this->_i].add_contact() == 1)
			exit(1);
		this->_i++;
		if (this->_count < 8)
			this->_count++;
		this->choice();
	}
	
	else if (choice == "SEARCH"){
		if (this->_count == 0)
		{
			std::cout << "NO CONTACT YET...";
			this->choice();
		}
		else{
		this->search();
		this->choice();
		}
	}
	
	else if (choice == "EXIT"){
		std::cout << "Bye!\n";
		return ;
	}
	
	else if(std::cin.eof() == true){
		std::cout << "Bye!" << std::endl;
		exit(1);
	}
	
	else{
		std::cout << "\nRETRY WITH GOOD CHOICE\n" << std::endl;
		this->choice();
	}
}
