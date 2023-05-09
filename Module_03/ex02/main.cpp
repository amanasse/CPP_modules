/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 09:48:58 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n********************CONSTRUCTORS******************" << std::endl;
	ClapTrap adrian = ClapTrap("Adrian");
	ClapTrap eric("Eric");

	ScavTrap melody("Melody");
	
	FragTrap clement("Clement");
	FragTrap theo = FragTrap("Theo");
    std::cout << "********************CONSTRUCTORS******************\n" << std::endl;


    std::cout << "************************NAME**********************" << std::endl;
	std::cout << "Adrian = " << adrian.get_name() << std::endl; 
	std::cout << "Eric = " << eric.get_name() << std::endl; 
	std::cout << "Julien = " << clement.get_name() << std::endl; 
	std::cout << "Theo = " << theo.get_name() << std::endl; 
	std::cout << "************************NAME**********************\n" << std::endl;


	adrian.get_status(); 
	
	melody.get_status();

	clement.get_status(); 

	clement.takeDamage(50);
	clement.attack("jean");
	clement.attack("jean");
	clement.attack("jean");
	clement.attack("jean");
	clement.attack("jean");
	clement.highFivesGuys(); 
	clement.beRepaired(10);
	clement.get_status(); 

	return (0);
}
