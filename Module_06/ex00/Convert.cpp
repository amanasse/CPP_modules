/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:08:27 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/15 13:50:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
    return;
}

Convert::Convert(std::string stock_string) : _str(stock_string), _IsChar(true), _IsInt(true), _IsDouble(true), _IsFloat(true), _IsPrintable(true), _IsFloatInf(false), _IsDoubleInf(false), _IsNan(false)
{
    this->_char = 0;
    this->_int = 0;
    this->_float = 0;
    this->_double = 0;
    return;
}

Convert::Convert(Convert const &cpy) : _str(cpy._str), _IsChar(cpy._IsChar), _IsInt(cpy._IsInt), _IsDouble(cpy._IsDouble), _IsFloat(cpy._IsFloat)
{
    return;
}

Convert::~Convert()
{
    return;
}

Convert & Convert::operator=(Convert const &cpy)
{
	this->_char = cpy._char;
	this->_int = cpy._int;
	this->_float = cpy._float;
	this->_double = cpy._double;
	return (*this);
}

void Convert::convertChar()
{
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);	
	this->_double = static_cast<double>(this->_char);
}

void Convert::convertInt()
{
	if ((this->_int >= 0 && this->_int <= 127))
		this->_char = static_cast<char>(this->_int);
	else
		this->_char = -1;
	if (isprint(this->_char) == 0)
		this->_IsPrintable = false;
	this->_float = static_cast<float>(this->_int);
	if (std::isinf(this->_float))
		this->_IsFloatInf = true;
	this->_double = static_cast<double>(this->_int);
	if (std::isinf(this->_double))
		this->_IsDoubleInf = true;
}

void Convert::convertFloat()
{
	this->_double = static_cast<double>(this->_float);
	if (std::isinf(this->_double))
		this->_IsDoubleInf = true;
	if (this->_double > INT_MAX || this->_double < INT_MIN)
		this->_IsInt = false;
	else
		this->_int = static_cast<int>(this->_float);
	if (this->_IsInt == false)
		this->_char = -1;
	else if((this->_int >= 0 && this->_int <= 127))
	{
		this->_char = static_cast<char>(this->_int);
		if (isprint(this->_char) == 0)
			this->_IsPrintable = false;
	}
	else 
		this->_char = -1;
}

void Convert::convertDouble()
{
	this->_float = static_cast<float>(this->_double);
	if (std::isinf(this->_float))
		this->_IsFloatInf = true;
	if (this->_double > INT_MAX || this->_double < INT_MIN)
		this->_IsInt = false;
	else
		this->_int = static_cast<int>(this->_double);
	if (this->_IsInt == false)
		this->_char = -1;
	else if((this->_int >= 0 && this->_int <= 127))
	{
		this->_char = static_cast<char>(this->_int);
		if (isprint(this->_char) == 0)
			this->_IsPrintable = false;
	}
	else 
		this->_char = -1;
}

void Convert::whichIsAv()
{
    if (this->_str.length() == 1)
    {
        if ((this->_str[0] >= 32 && this->_str[0] <= 47) || (this->_str[0] >= 58 && this->_str[0] <= 126))
		{
			this->_char = this->_str[0];
			this->convertChar();
			this->getStatus_char();
			return ;
		}
		else if (this->_str[0] >= 48 && this->_str[0] <= 57)
		{
			this->_int = atoi(this->_str.c_str());
			this->convertInt();
			this->getStatus_int();
		}
    }
	else if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
	{
		this->_IsInt = false;
		this->_IsNan = true;
		this->_char = -1;
		this->_float = NAN;
		this->_double = NAN;
		this->getStatus_int();
	}
	else if (_str.compare("+inf") == 0 || _str.compare("+inff") == 0 || _str.compare("-inf") == 0 || _str.compare("-inff") == 0)
	{
		this->_IsInt = false;
		this->_IsFloatInf = true;
		this->_IsDoubleInf = true;
		this->_char = -1;
		if (_str.compare("+inf") == 0 || _str.compare("+inff") == 0)
		{
			this->_float = INFINITY;
			this->_double = INFINITY;
		}
		else if (_str.compare("-inf") == 0 || _str.compare("-inff") == 0)
		{
			this->_float = -INFINITY;
			this->_double = -INFINITY;
		}
		this->getStatus_int();
	}
	else if (this->CheckIsInt() == true)
	{
		double tmp = atof(this->_str.c_str());
		if (tmp > INT_MAX || tmp < INT_MIN)
		{
			this->_double = tmp;
			if (std::isinf(this->_double))
				this->_IsDoubleInf = true;
			this->_char = -1;
			this->_float = static_cast<float>(tmp);
			if (std::isinf(this->_float))
				this->_IsFloatInf = true;
			this->_IsInt = false;
			this->getStatus_int();
		}
		else
		{
			this->_int = atoi(this->_str.c_str());
			this->convertInt();
			this->getStatus_int();
		}
		return ;
	}
	else if (this->CheckIsFloat() == true)
	{
		this->_float = atof(this->_str.c_str());
		if (std::isinf(this->_float))
			this->_IsFloatInf = true;
		this->convertFloat();
		this->getStatus_float();
	}
	else if (this->CheckIsDouble() == true)
	{
		this->_double = atof(this->_str.c_str());
		if (std::isinf(this->_double))
			this->_IsDoubleInf = true;
		this->convertDouble();
		this->getStatus_double();
	}	
	else
	{
		std::cout << "Error: Type not recognized" << std::endl;
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : impossible" << std::endl;
		std::cout << "Double : impossible" << std::endl;
	}
}