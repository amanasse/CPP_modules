/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:19 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/04 12:16:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "colors.h"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

RPN::RPN()
{
    return ;
}

RPN::RPN(RPN const &cpy)
{
    std::cout << "RPN Copy constructor called" << std::endl;
    this->_myStack = cpy.getMystack();
    return;
}



RPN::~RPN()
{
    return ;
}

// ************************************************************************** //
//                           Operateur d'assignation        =                 //
// ************************************************************************** //

RPN & RPN::operator=(RPN const &cpy)
{
    std::cout << "RPN Copy assignment operator called" << std::endl;
    this->_myStack = cpy.getMystack();
    return *this;
}


// ************************************************************************** //
//                             Fonctions Membres                              //
// ************************************************************************** //

std::stack<int> RPN::getMystack(void) const
{
    return (this->_myStack);
}


bool is_operand (char c)
{
	if (c != '*' && c != '+' && c != '-' && c != '/')
		return (false);
	return (true);
}


void RPN::switch_case(char c, int a, int b)
{
	switch (c)
	{
		case ('+'):
			this->_myStack.push(a + b);
			break;
		case ('-'):
			this->_myStack.push(b - a);
			break;
		case ('/'):
			this->_myStack.push(a / b);
			break;
		case ('*'):
			this->_myStack.push(a * b);
			break;
	}
}

int	RPN::Calcul(const std::string &str)
{
	int i = 0;
	int j = 0;


	int a = 0;
	int b = 0;
	if (str.empty())
	{
		std::cout << BOLD_RED << "Error\nEmpty arg\n" << RESET;
		return (-1);
	}
	while (str[i] != 0)
	{
		if (isspace(str[i]))
		{
			i++;
			continue ;
		}
		int count = 0;
		while (isdigit(str[i]) && count < 2)
		{
			j = i;
			count++;
			i++;
		}
		if (count > 1)
		{
			std::cout << BOLD_RED << "Error : Too Large Numbers" << RESET << std::endl;
			return (-1);
		}
		else if (isdigit(str[j]))
		{
			this->_myStack.push(str[j] - 48);
			j = i;
			if (is_operand(str[i]))
				continue;
		}
		else
		{
			if (_myStack.size() >= 2)
			{
				a = this->_myStack.top();
				this->_myStack.pop();
				b = this->_myStack.top();
				this->_myStack.pop();
			}
			else
			{
				std::cout << BOLD_RED << "Error\nToo Much Operations" << RESET << std::endl;
				return (-1);
			}
			switch_case(str[i], a, b);
		}
		i++;
	}
	if (str[i] != '\0')
	{
		std::cout << BOLD_RED << "Error : Parsing" << RESET << std::endl;
		return (-1);
	}
	if (_myStack.size() >= 2)
	{
		std::cout << BOLD_RED << "Error\nNot Enough Operand" << RESET << std::endl;
		return (-1);
	}	
    	
	std::cout << BOLD_GREEN << "RESULT = " << this->_myStack.top() << RESET << std::endl;

	return (0);
}
