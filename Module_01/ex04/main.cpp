/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:27:12 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/09 09:56:49 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
		return (std::cout << "ERROR\nBad Arguments" << std::endl, -1);
	std::string line;
	std::string content;
	std::string aRemplacer;
	std::string remplacePar;
	std::ifstream file(av[1]);
	std::string outname;
	
	aRemplacer = av[2];
	remplacePar = av[3];


	if (file.is_open() == true)
	{
		while (getline(file, line))
		{
			content += line + "\n";
		}
		file.close();
	}
	else
	{
		std::cout << "ERROR\nCannot open" << std::endl;
		return (0);
	}
	size_t find = 0;
	while (find != std::string::npos)
	{
		find = content.find(av[2], find);
		if (find == std::string::npos)
			break;
		content.erase(find, aRemplacer.length());
		content.insert(find, remplacePar);
	}

	outname = av[1];
	outname = outname + ".replace";

	std::cout << outname;

	std::ofstream fileout(outname.data());
	fileout << content;
	return (0);
}
	