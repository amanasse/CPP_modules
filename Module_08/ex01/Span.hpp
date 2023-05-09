/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:00:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/21 15:51:33 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>


class Span
{
    public :
    Span (unsigned int N);
    Span (Span const &cpy);
    Span &operator=(Span const &cpy);
    ~Span();
    void addNumber(int num);
    void addRandom(unsigned int num);
    int shortestSpan(void);
    int longestSpan(void);
    void printVector(void);


    class ExceptionOverNumbers : public std::exception
    {
        virtual const char *what() const throw()
        {
            return("Cannot Add a Number");
        }
    };
    class ExceptionCannotFindShortest : public std::exception
    {
        virtual const char *what() const throw()
        {
            return("Cannot Find the Shortest Span");
        }
    };
    class ExceptionCannotFindLongest : public std::exception
    {
        virtual const char *what() const throw()
        {
            return("Cannot Find the Longest Span");
        }
    };

    private :
    Span(void);    
    unsigned int _N;
    std::vector<int> _vec;
    unsigned int _i;

};


#endif