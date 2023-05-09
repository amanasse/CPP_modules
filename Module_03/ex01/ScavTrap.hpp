/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:16:13 by amanasse          #+#    #+#             */
/*   Updated: 2023/01/27 13:45:33 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &cpy);
    ScavTrap&operator=(ScavTrap const &cpy);
    ~ScavTrap();
    
    void attack(const std::string& target);
    void guardGate(void);
};



#endif