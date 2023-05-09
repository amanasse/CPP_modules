/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:08:37 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/14 13:04:14 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <climits>
#include <limits>
#include <cctype>
#include <cmath>

class Convert
{
    public :
    Convert();
    Convert(std::string stock_string);
    Convert(const Convert &cpy);
    Convert & operator=(Convert const &cpy);
    ~Convert();

    void whichIsAv();

    void convertChar();
    void convertInt();
    void convertFloat();
    void convertDouble();

    void getStatus_char() const;
    void getStatus_int() const;
    void getStatus_double() const;
    void getStatus_float() const;
    
    bool CheckIsChar();
    bool CheckIsInt();
    bool CheckIsFloat();
    bool CheckIsDouble();



    private :
	std::string const _str;
	
    char	_char;
    int		_int;
    double	_double;
    float	_float;
	
	bool _IsChar;
	bool _IsInt;
	bool _IsDouble;
	bool _IsFloat;
    bool _IsPrintable;
    bool _IsFloatInf;
    bool _IsDoubleInf;

    bool _IsNan;
};




#endif