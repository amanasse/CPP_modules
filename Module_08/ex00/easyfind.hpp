/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:00:57 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/21 12:26:32 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

class exceptionNotFound : public std::exception 
{	
	virtual const char *what() const throw() 
	{	
		return("Cannot Find");
	}
};

template <typename T>
bool easyfind (T &a, int b)
{
    if (a.end() != std::find(a.begin(), a.end(), b))
        return (true);
    throw exceptionNotFound();
    // typename T::iterator first_it = a.begin();
    // typename T::iterator last_it = a.end();
    // while (first_it != last_it)
    // {
    //     if (*first_it == b)
    //         return (1);
    //     ++first_it;
    // }   
}


#endif