/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetStatus.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:48:02 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/15 13:47:38 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void Convert::getStatus_char() const
{
	std::cout << "Char : " << this->_char << std::endl;
	std::cout << "Int : " << this->_int << std::endl;
	std::cout << "Float : " << this->_float << ".0f" << std::endl;
	std::cout << "Double : " << this->_double << ".0" << std::endl;
}

void Convert::getStatus_int() const
{
	if (this->_char == -1)
		std::cout << "Char : impossible" << std::endl;
	else if (this->_IsPrintable == false)
		std::cout << "Char : not displayable" << std::endl;
	else
		std::cout << "Char : [" << this->_char << "]" << std::endl;
	if (this->_IsInt == false)
	{
		std::cout << "Int : impossible" << std::endl;
		if (this->_IsFloatInf == true || this->_IsNan == true)
			std::cout << "Float : " << this->_float << "f" << std::endl;
		else
			std::cout << "Float : " << this->_float << ".0f" << std::endl;
		if (this->_IsDoubleInf == true || this->_IsNan == true || this->_IsDoubleInf == true)
			std::cout << "Double : " << this->_double << std::endl;
		else
			std::cout << "Double : " << this->_double << ".0" << std::endl;
	}
	else
	{
		std::cout << "Int : " << this->_int << std::endl;
		std::cout << "Float : " << this->_float << ".0f" << std::endl;
		std::cout << "Double : " << this->_double << ".0" << std::endl;
	}
}

void Convert::getStatus_float() const
{
	if (this->_char == -1)
		std::cout << "Char : impossible" << std::endl;
	else if (this->_IsPrintable == false)
		std::cout << "Char : not displayable" << std::endl;
	else
		std::cout << "Char : [" << this->_char << "]" << std::endl;
	
	
	if (this->_IsInt == false)
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int : " << this->_int << std::endl;
	
	
	if (this->_int == this->_float)
		std::cout << "Float : " << this->_float << ".0f" << std::endl;
	else if (this->_IsFloat == true)
		std::cout << "Float : " << this->_float << "f" << std::endl;
	else
		std::cout << "Float : " << this->_float << "f" << std::endl;
	
	
	if (this->_int == this->_double)
		std::cout << "Double : " << this->_double << ".0" << std::endl;
	else if (this->_IsDoubleInf == true)
		std::cout << "Double : " << this->_double << std::endl;
	else
		std::cout << "Double : " << this->_double << std::endl;
}

void Convert::getStatus_double() const
{
	if (this->_char == -1)
		std::cout << "Char : impossible" << std::endl;
	else if (this->_IsPrintable == false)
		std::cout << "Char : not displayable" << std::endl;
	else
		std::cout << "Char : [" << this->_char << "]" << std::endl;
	

	if (this->_IsInt == false)
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int : " << this->_int << std::endl;


	if (this->_int == this->_float)
		std::cout << "Float : " << this->_float << ".0f" << std::endl;
	else if (this->_IsFloat == true)
		std::cout << "Float : " << this->_float << "f" << std::endl;
	else
		std::cout << "Float : " << this->_float << "f" << std::endl;
	
	
	if (this->_int == this->_double)
		std::cout << "Double : " << this->_double << ".0" << std::endl;
	else if (this->_IsDoubleInf == true)
		std::cout << "Double : " << this->_double << std::endl;
	else
		std::cout << "Double : " << this->_double << std::endl;
}
