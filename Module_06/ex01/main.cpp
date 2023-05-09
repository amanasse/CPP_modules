/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:56:15 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 13:13:46 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "colors.h"


void get_struct(Data *data)
{
    std::cout << BLUE << "\nADRESSE DE DATA : " << &data << "\n" << RESET << std::endl;
    
    std::cout << "NAME : " << data->name << std::endl;
    std::cout << "CHAR : " << data->a << std::endl;
    std::cout << "INT : " << data->i << std::endl;
    std::cout << "DOUBLE : " << data->d << std::endl;
    std::cout << "FLOAT : " << data->f << std::endl;
}

int main()
{
    Data *data = new Data;
    Data *data2;
    uintptr_t j;

    data->name = "Jean";
    data->a = 'a';
    data->i = 10;
    data->d = 12.5;
    data->f = 12;

    get_struct(data);

    j = serialize(data);
    std::cout << YELLOW <<  "\nJ : " << j << std::endl;
    std::cout <<  "ADRESSE DE J : " << &j << RESET << "\n" <<  std::endl;
    
    
    data2 = deserialize(j);


    get_struct(data2);
    delete (data2);

    return (0);
}