/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:08:27 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 18:01:12 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "colors.h"

Base::~Base(void)
{
    return;
}


Base* generate(void)
{
    srand(time(NULL));
    int randomNumber = rand() % 3;
    switch(randomNumber)
    {
        case 0:
        {
            return(new A);
        }
        case 1:
        {
            return(new B);
        }
        case 2:
        {
            return(new C);
        }
        default:
        {
            return(NULL);
        }
    }
    return (NULL);
}

void identify(Base *p)
{
    A *ptr1;
    B *ptr2;
    C *ptr3;

    std::cout << GREEN << "******** Pointer function *********" << RESET << std::endl;
    ptr1 = dynamic_cast<A*>(p);
    if (ptr1 != NULL)
        std::cout << "Base is A" << std::endl;
    ptr2 = dynamic_cast<B*>(p);
    if (ptr2 != NULL)
        std::cout << "Base is B" << std::endl;
    ptr3 = dynamic_cast<C*>(p);
    if (ptr3 != NULL)
        std::cout << "Base is C" << std::endl;        
}

void identify(Base &p)
{
    std::cout << GREEN << "******** Reference function *********" << RESET << std::endl;
    try
    {
        A &ptr1 = dynamic_cast<A&>(p);
        (void)ptr1;
        std::cout << "Base is A" << std::endl;
        return ;
    }
    catch(std::exception)
    {

    }
    try
    {
        B &ptr1 = dynamic_cast<B&>(p);
        (void)ptr1;
        std::cout << "Base is B" << std::endl;
        return ;
    }
    catch(std::exception)
    {

    }
    try
    {
        C &ptr1 = dynamic_cast<C&>(p);
        (void)ptr1;
        std::cout << "Base is C" << std::endl;
    }
    catch(std::exception)
    {

    }
}
