/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/24 12:27:10 by amanasse         ###   ########.fr       */
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
    ~Fixed();
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
    Fixed &operator=(Fixed const &cpy);
    
    Fixed operator+(Fixed const &cpy);
    Fixed operator*(Fixed const &cpy);
    Fixed operator-(Fixed const &cpy);
    Fixed operator/(Fixed const &cpy);
    
    bool operator>(Fixed const &cpy);
    bool operator<(Fixed const &cpy);
    bool operator>=(Fixed const &cpy);
    bool operator<=(Fixed const &cpy);
    bool operator==(Fixed const &cpy);
    bool operator!=(Fixed const &cpy);

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
    
    static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);

    private:
    static int const _stockBits = 8;
    int _rawBits;
};

std::ostream & operator <<(std::ostream & o, Fixed const & cpy);

#endif
