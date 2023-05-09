/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:12 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/18 13:44:55 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl	Harl1;
	
	Harl1.complain("DEBUG");
	
	Harl1.complain("INFO");
	
	Harl1.complain("WARNING");
	Harl1.complain("WARNING");
	
	Harl1.complain("ERROR");
	Harl1.complain("ERROR");
	Harl1.complain("ERROR");
	Harl1.complain("ERROR");
	Harl1.complain("ERROR");
	
	return (0);
}

	// int arme1 = 1;
	// int* arme2 = &arme1;
	// arme1 = 2;
	// std::cout << "arme2 = " << *arme2 << std::endl;		