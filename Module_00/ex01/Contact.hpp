/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:22:18 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/13 14:06:19 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cctype>
# include <iostream>

class Contact{
public:
    Contact();
    ~Contact();
    int 	add_contact(void);
    void	print_contact(int j);
    void	print_full_contact(void);
	void    print_case(std::string str);

private:
    std::string Name;
    std::string LastName;
    std::string Nickname;
    std::string Secret;    
    std::string Tel_number;    
};

#endif