/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:59:59 by amanasse          #+#    #+#             */
/*   Updated: 2023/02/01 11:34:04 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
    Brain();
    Brain(std::string type);
    Brain(Brain const &cpy);
    Brain &operator=(Brain const &cpy);
    ~Brain();
    void add_ideas(std::string idea, std::string type);
    void get_all_ideas(std::string type) const;
    void clear_all_ideas(std::string type) const;
    void set_idea(std::string idea, int i);

    

    private:
    std::string _ideas[100];
    std::string _type;
    int i;

};

#endif
