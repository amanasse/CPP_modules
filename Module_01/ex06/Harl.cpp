/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:33:40 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 14:04:01 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(void) 
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." <<std::endl << "I really do !" << std::endl;
}

void Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;	
}

void Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;	
}
void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;	
}

void Harl::complain( std::string level )
{

	void (Harl::*ptr[4])(void);
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;

	std::string	tab[4];
	tab[0] = "DEBUG",
	tab[1] = "INFO";
	tab[2] = "WARNING";
	tab[3] = "ERROR";

	int i = 0;
	while (i < 4)
	{
		if (level == tab[i])
		{
			break;
		}
		i++;
	}


	switch (i)
	{
		case 0:
		{	
			(this->*ptr[0])();
			(this->*ptr[1])();
			(this->*ptr[2])();
			(this->*ptr[3])();
			break;
		}
		case 1:
		{
			(this->*ptr[1])();
			(this->*ptr[2])();
			(this->*ptr[3])();
			break;
		}
		case 2:
		{
			(this->*ptr[2])();
			(this->*ptr[3])();
			break;					
		}
		case 3:
		{
			(this->*ptr[3])();
			break;
		}
		default:
		{
			std::cout <<"[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
	return ;
}
