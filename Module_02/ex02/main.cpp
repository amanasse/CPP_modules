/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:54:23 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/24 12:47:28 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }
    {
        std::cout << "\n\n*******************************" << std::endl;
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        Fixed c (Fixed(5) / Fixed(1));;
        Fixed d = c / 2;
        Fixed e = c > d;
    
        std::cout << "a = : " << a << std::endl;
        std::cout << "b = : " << b << std::endl;
        std::cout << "c = : " << c << std::endl;
        std::cout << "d = : " << d << std::endl;
        std::cout << "e = : " << e << std::endl;
    
        std::cout << b << std::endl;
        std::cout << Fixed::min( a, b ) << std::endl;
    }
    return (0);
}
