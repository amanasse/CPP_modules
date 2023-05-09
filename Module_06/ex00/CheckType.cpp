/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:51:14 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/13 16:51:31 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool Convert::CheckIsInt()
{
	size_t i = 0;
	while (this->_str[i] == ' ')
		i++;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	while (this->_str[i] >= 48 && this->_str[i] <= 56)
		i++;
	if (this->_str.length() == i)
		return true;
	else
		return false;
	
}

bool Convert::CheckIsFloat()
{
	int count_f = 0;
	int count_virgule = 0;
	unsigned long i = 0;
	while (this->_str[i])
	{
		if (this->_str[i] == '.')
			count_virgule++;
		if (this->_str[i] == 'f')
			count_f++;
		i++;
	}
	if (count_virgule > 1 || count_f != 1)
		return (false);
	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	while (this->_str[i] >= '0' && this->_str[i] <= '9')
		i++;
	if (this->_str[i] == '.')
		i++;
	while (this->_str[i] >= '0' && this->_str[i] <= '9')
		i++;
	if (this->_str[i] != 'f')
		return (false);
	if (this->_str.length() != i + 1)
		return (false);
	return (true);	
}

bool Convert::CheckIsDouble()
{
	int count_virgule = 0;
	unsigned long i = 0;
	while (this->_str[i])
	{
		if (this->_str[i] == '.')
			count_virgule++;
		i++;
	}
	if (count_virgule != 1)
		return (false);
	i = 0;
	if (this->_str[i] == '+' || this->_str[i] == '-')
		i++;
	while (this->_str[i] >= '0' && this->_str[i] <= '9')
		i++;
	if (this->_str[i] != '.')
		return (false);
	i++;
	while (this->_str[i] >= '0' && this->_str[i] <= '9')
		i++;
	if (this->_str.length() != i)
		return (false);
	return (true);	
}
