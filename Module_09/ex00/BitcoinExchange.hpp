/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:24 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/04 11:22:16 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <regex.h>
#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>

#define PATTERN "^[0-9]{4}-(((0[13578]|(10|12))-(0[1-9]|[1-2][0-9]|3[0-1]))|(02-(0[1-9]|[1-2][0-9]))|((0[469]|11)-(0[1-9]|[1-2][0-9]|30)))$"

class BitcoinExchange
{
	public:
	BitcoinExchange();
	BitcoinExchange(std::string name, int grade);
	BitcoinExchange(BitcoinExchange const &cpy);
	BitcoinExchange &operator=(BitcoinExchange const &cpy);
	~BitcoinExchange();

    std::map <std::string, float> getData(void) const;

    void        MakeMapData(std::string data);
    void        MakeExchange(char* input);
	bool		Checkdate(const std::string &date);
	bool		is_valid_number(const std::string &str);


    void        Showdata(void);

	class regex_error: public std::exception
    {
		public:
        virtual const char *what() const throw();
    };

	private:
	std::map<std::string, float>	_data;
	regex_t							_regex;
    
	
};

// std::ostream &operator<<(std::ostream &o, BureauCrat const &rhs);


#endif