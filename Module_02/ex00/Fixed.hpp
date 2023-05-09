/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/24 12:23:15 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
    Fixed();
    Fixed(Fixed const &cpy);
    Fixed&operator=(Fixed const &cpy);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );


    private:
    int _rawBits;
    static int const _stockBits;
};

#endif
