/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:56:15 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 13:04:22 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include "colors.h"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Wrong Arguments" << std::endl;
    else
    {
        std::string convert_string = av[1];
        Convert a(convert_string);
        a.whichIsAv();
    }
    return (0);
}