/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:34:01 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/21 16:40:49 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
#include "colors.h"


Span::Span(unsigned int N) : _N(N), _i(0)
{
    return ;    
}

Span::Span(Span const &cpy)
{
    this->_i = cpy._i;
    this->_N = cpy._N;
    return ;
}

Span & Span::operator=(Span const &cpy)
{
    this->_N = cpy._N;
    return (*this);
}

Span::~Span(void)
{
    return ;    
}

void Span::addNumber(int num)
{
    
    if (this->_i < this->_N)
    {
        this->_vec.push_back(num);
        this->_i++;
    }
    else
        throw ExceptionOverNumbers();
}

void Span::addRandom(unsigned int num)
{
    std::vector<int>::iterator first_it = this->_vec.begin() + this->_i;
    std::srand(time(NULL));
    int random;
    if (this->_i < this->_N)
    {
        while (this->_i <= num)
        {
			if (this->_i == this->_N)
		        throw ExceptionOverNumbers();
			random = rand();
            first_it = _vec.insert(_vec.begin() + _i, random);
            ++first_it;
			this->_i++;
        }
    }
    else
        throw ExceptionOverNumbers();
}

int Span::longestSpan(void)
{
	if (this->_i < 2)
		throw ExceptionCannotFindLongest();
	int min = *std::min_element(_vec.begin(),_vec.end());
	int max = *std::max_element(_vec.begin(),_vec.end());
	return (max - min);
}

int Span::shortestSpan(void)
{
	int shortest_span = longestSpan();
	unsigned int j;
	

	for (unsigned int i = 0; i < this->_i; i++)
	{
        j = 0;
        while (j < this->_i)
        {	
            if (j == i)
                j++;
            else
            {
                if (_vec[i] - _vec[j] >= 0 && _vec[i] - _vec[j] < shortest_span)
                    shortest_span = _vec[i] - _vec[j];
                else if (_vec[j] - _vec[i] >= 0 && _vec[j] - _vec[i] < shortest_span)
                    shortest_span = _vec[j] - _vec[i];
                j++;
            }
        }
	}
	return (shortest_span);
}

void Span::printVector (void)
{
    std::vector<int>::iterator first_it = this->_vec.begin();
    std::vector<int>::iterator last_it = this->_vec.end();
    int i = 0;
	while (first_it != last_it)
    {
        std::cout << BLUE << "[" << i << "] : " << *first_it << RESET << std::endl;
        ++first_it;
		i++;
    }
}