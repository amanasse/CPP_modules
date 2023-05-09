/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/23 14:20:08 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const Int)
{
    this->_rawBits = Int * (1 << this->_stockBits);
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float const Float)
{
    this->_rawBits  = roundf(Float * (1 << this->_stockBits));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Fixed&Fixed::operator=(Fixed const &cpy) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = cpy.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return (this->_rawBits);
}

int Fixed::toInt( void ) const
{
    // return (this->_rawBits / 256);
    return ((this->_rawBits /(1 << this->_stockBits)));
}

float Fixed::toFloat( void ) const
{
    // return (this->_rawBits / 256);
    return (((float)this->_rawBits /(1 << this->_stockBits)));
}

// ************************************************************************** //
//                         Fonction Hors Class                                //
// ************************************************************************** //

std::ostream & operator <<(std::ostream & out, Fixed const & cpy)
{
    out << cpy.toFloat();
    return (out);
}
