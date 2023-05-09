/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:12 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/20 14:08:33 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main()
{
	Harl	Harl1;
	
	Harl1.complain("DEBUG");
	
	Harl1.complain("coucou");
	
	Harl1.complain("INFO");
	Harl1.complain("WARNING");
	Harl1.complain("ERROR");

	return (0);
}