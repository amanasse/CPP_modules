/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:59:50 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/22 10:35:38 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "MutantStack.hpp"
#include <list>
#include <vector>
#include <iostream>

int main() 
{
    std::cout << YELLOW << "***********TEST_MAIN************" << RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    
    
    
    std::cout << YELLOW << "***********TEST_LIST************" << RESET << std::endl;
    std::list<int> lst1;
    lst1.push_back(5);
    lst1.push_back(17);
    std::cout << lst1.back() << std::endl;
    lst1.pop_back();
    std::cout << lst1.size() << std::endl;
    lst1.push_back(3);
    lst1.push_back(5);
    lst1.push_back(737);
    lst1.push_back(0);
    std::list<int>::iterator it2 = lst1.begin();
    std::list<int>::iterator ite2 = lst1.end();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::cout << YELLOW << "***********TEST_VECTOR************" << RESET << std::endl;
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(17);
    std::cout << vec.back() << std::endl;
    vec.pop_back();
    std::cout << vec.size() << std::endl;
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(737);
    vec.push_back(0);
    std::vector<int>::iterator it3 = vec.begin();
    std::vector<int>::iterator ite3 = vec.end();
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }

    return (0);
}
