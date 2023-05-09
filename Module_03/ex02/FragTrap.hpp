/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:16:13 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/25 17:36:52 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &cpy);
    FragTrap&operator=(FragTrap const &cpy);
    ~FragTrap();
    
    void highFivesGuys(void);
};



#endif