/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:54 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/24 12:47:18 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

Fixed::Fixed() : _rawBits(0)
{
    return;
}

Fixed::Fixed(int const Int)
{
    this->_rawBits = Int * (1 << this->_stockBits);
    return ;
}

Fixed::Fixed(float const Float)
{
    this->_rawBits  = roundf(Float * (1 << this->_stockBits));
    return ;
}

Fixed::Fixed(Fixed const &cpy)
{
    *this = cpy;
    return;
}

Fixed::~Fixed()
{
    return;
}

// ************************************************************************** //
//                         Operateur d'assignation                            //
// ************************************************************************** //

Fixed&Fixed::operator=(Fixed const &cpy) 
{
    this->_rawBits = cpy.getRawBits();
    return *this;
}

// ************************************************************************** //
//                         Operation mathematiques                            //
// ************************************************************************** //

Fixed Fixed::operator+(Fixed const &cpy)
{
    Fixed resultat;

    resultat.setRawBits(this->_rawBits + cpy.getRawBits());
    return(resultat);
}

Fixed Fixed::operator-(Fixed const &cpy)
{
    Fixed resultat;

    resultat.setRawBits(this->_rawBits - cpy.getRawBits());
    return(resultat);
}

Fixed Fixed::operator*(Fixed const &cpy)
{
    Fixed resultat;

    resultat.setRawBits(this->_rawBits * (cpy.getRawBits() / (1 << _stockBits)));
    return(resultat);
}

Fixed Fixed::operator/(Fixed const &cpy)
{
    Fixed resultat;
    if (cpy.getRawBits() / (1 << _stockBits) == 0)
    {
        std::cout << "Error\ncannot divide by 0" << std::endl;
        exit(-1);
    }
    resultat.setRawBits(this->_rawBits / (cpy.getRawBits() / (1 << _stockBits)));
    return(resultat);
}

bool Fixed::operator>(Fixed const &cpy)
{
    return (this->_rawBits > cpy.getRawBits());
}

bool Fixed::operator<(Fixed const &cpy)
{
    return (this->_rawBits < cpy.getRawBits());
}

bool Fixed::operator<=(Fixed const &cpy)
{
    return (this->_rawBits <= cpy.getRawBits());
}

bool Fixed::operator>=(Fixed const &cpy)
{
    return (this->_rawBits >= cpy.getRawBits());
}

bool Fixed::operator==(Fixed const &cpy)
{
    return (this->_rawBits == cpy.getRawBits());
}

bool Fixed::operator!=(Fixed const &cpy)
{
    return (this->_rawBits != cpy.getRawBits());
}

Fixed &Fixed::operator++(void)
{
    this->_rawBits++;

    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_rawBits--;

    return (*this);  
}

Fixed Fixed::operator++(int )
{
    Fixed tmp;
    tmp = *this;
    this->_rawBits++;

    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp = *this;
    this->_rawBits--;

    return (tmp);
}
// ************************************************************************** //
//                         Fonctions membres de class                         //
// ************************************************************************** //

int Fixed::getRawBits( void ) const
{
    return (this->_rawBits);
}

void Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
    return ;
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a._rawBits > b._rawBits)
        return (b);
    else
        return (a);    
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a._rawBits > b._rawBits)
        return (a);
    else
        return (b);  
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a._rawBits > b._rawBits)
        return (b);
    else
        return (a);   
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a._rawBits > b._rawBits)
        return (a);
    else
        return (b);   
}

// ************************************************************************** //
//                         Fonction Hors Class                                //
// ************************************************************************** //

std::ostream & operator <<(std::ostream & out, Fixed const & cpy)
{
    out << cpy.toFloat();
    return (out);
}
