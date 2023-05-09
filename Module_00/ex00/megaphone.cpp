/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:23:19 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/13 14:43:31 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main (int ac, char **av){

	int i = 1;
	int j;
	if (ac > 1){
		while(i < ac){
			
			for (j = 0; av[i][j] != '\0'; j++)
				std::cout << (char)toupper(av[i][j]);
			i++;	
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
