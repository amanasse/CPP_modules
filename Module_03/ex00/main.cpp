/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 09:48:31 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "************************************CONSTRUCTORS*******************************" << std::endl;
	ClapTrap adrian = ClapTrap("Adrian");
	ClapTrap eric("Eric");
	ClapTrap adrianBis(adrian);
	ClapTrap ericBis;
	ericBis = eric;
    std::cout << "************************************CONSTRUCTORS*******************************\n" << std::endl;
	
    std::cout << "************************************NAME*******************************" << std::endl;
	std::cout << "Adrian = " << adrian.get_name() << std::endl; 
	std::cout << "Eric = " << eric.get_name() << std::endl; 
	std::cout << "AdrianBis = " << adrianBis.get_name() << std::endl; 
	std::cout << "EricBis = " << ericBis.get_name() << std::endl;
	std::cout << "************************************NAME*******************************\n" << std::endl;

	adrian.attack("Jean");    
	adrian.get_status(); 

	adrian.takeDamage(50);
	adrian.beRepaired(10);
	
	adrian.get_status(); 
	eric.get_status(); 
	
	eric.beRepaired(150);
	eric.attack("Jean");
	eric.takeDamage(50);
	eric.beRepaired(1);
	eric.beRepaired(1);
	eric.beRepaired(1);
	eric.beRepaired(1);
	eric.beRepaired(1);
	eric.beRepaired(1);

	eric.get_status();
	return (0);
}
