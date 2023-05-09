/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:40:06 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/13 16:09:05 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <cctype>
# include <iostream>
# include "Contact.hpp"


class PhoneBook
{
    public:
    PhoneBook();
    ~PhoneBook();
    void    choice(void);
    void 	search(void);


    private:
    Contact _Contact[8];
    int     _index;
    int     _i;
    int     _count;
};

#endif
