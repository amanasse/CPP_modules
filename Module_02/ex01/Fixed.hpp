/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/24 12:23:47 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
    Fixed();
    Fixed(int const Int);
    Fixed(float const Float);
    Fixed(Fixed const &cpy);
    Fixed&operator=(Fixed const &cpy);
    ~Fixed();
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;


    private:
    static int const _stockBits = 8;
    int _rawBits;
};

std::ostream & operator <<(std::ostream & o, Fixed const & cpy);

#endif
