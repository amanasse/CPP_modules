/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanasse <amanasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:25:19 by amanasse          #+#    #+#             */
/*   Updated: 2023/04/04 14:20:42 by amanasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "colors.h"

// ************************************************************************** //
//                         Constructeur/Destructeur                           //
// ************************************************************************** //

BitcoinExchange::BitcoinExchange()
{
	try
	{
		if (regcomp(&this->_regex, PATTERN, REG_EXTENDED))
			throw BitcoinExchange::regex_error();
	}
	catch (const BitcoinExchange::regex_error &e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
    return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cpy)
{
    std::cout << "Bitcoin Copy constructor called" << std::endl;
    this->_data = cpy.getData();
    return;
}



BitcoinExchange::~BitcoinExchange()
{
	regfree(&this->_regex);
    return ;
}

// ************************************************************************** //
//                           Operateur d'assignation        =                 //
// ************************************************************************** //

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const &cpy)
{
    std::cout << "Bitcoin Copy assignment operator called" << std::endl;
    this->_data = cpy.getData();
    return *this;
}


// ************************************************************************** //
//                             Fonctions Membres                              //
// ************************************************************************** //

const char *BitcoinExchange::regex_error::what() const throw()
{
	return ("Error: compiling regex");
}


std::map <std::string, float> BitcoinExchange::getData(void) const
{
    return (this->_data);
}

void	BitcoinExchange::MakeMapData(std::string data)
{
    std::stringstream ss(data);
    std::string line;
    while (std::getline(ss, line, '\n')) 
	{
		std::stringstream ss2(line);
		std::string key;
		float value;
		std::getline(ss2, key, ',');
		ss2 >> value;
		this->_data[key] = value;
	}
}

void	BitcoinExchange::Showdata(void)
{
	std::cout << "Data contents:" << std::endl;
	for (std::map<std::string, float>::iterator it = this->_data.begin(); it != this->_data.end(); ++it) 
	{
        std::cout << it->first << " => " << it->second << std::endl;
    }
}

bool	BitcoinExchange::is_valid_number(const std::string& str) 
{
  	char*		endptr;
  	long int	number = std::strtod(str.c_str(), &endptr);


	if (*endptr != '\0')
	{
	    std::cout << "Error: not a valid number" << std::endl;
	    return false;
	}
	else if (number > 1000 || number < std::numeric_limits<int>::min())
	{
	    std::cout << "Error: too large a number" << std::endl;
	    return false;
	}
	else
	    return true;
}

bool	BitcoinExchange::Checkdate(const std::string &date)
{
	if (!regexec(&this->_regex, date.c_str(), 0, NULL, 0))
		return (true);
	else
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
}

void	BitcoinExchange::MakeExchange(char* input)
{
	std::ifstream file(input);
    std::string line;
    if(file.is_open())
	{
		std::getline(file, line);
		if (line != "date | value")
		{
			std::cout << "Error: INVALID Document --> Need a Document .txt in this format : date | value" << std::endl;
			return;
		}	
		while (std::getline(file, line)) 
		{ 
    	    std::istringstream iss(line);
    	    std::string date_str;
			std::string value_str;
			
    	    float value;
    	    if (std::getline(iss, date_str, '|') && std::getline(iss, value_str)) 
			{
    	        std::string trimmed_date = date_str.substr(0, 10);
				
				if(Checkdate(trimmed_date) == true && is_valid_number(value_str) == true)
				{
    	        	std::stringstream ss(value_str);
    	        	ss >> value;
					if (value < 0)
					{
						std::cout << "Error: not a positive number" << std::endl;
						continue;
					}
					else if (value > 1000)
					{
						std::cout << "Error: too large a number" << std::endl;
						continue;
					}
					else if (trimmed_date < "2009-01-02")
					{
						std::cout << "Error: date is anterior of the creation of the BTC" << std::endl;
						continue;
					}
    	        	float factor = 1.0;
					if (this->_data.find(trimmed_date) != this->_data.end())
					{ 
    	        	    factor *= this->_data[trimmed_date];
    	        	}
					else 
					{
            			std::map<std::string, float>::iterator it = this->_data.lower_bound(trimmed_date); //date antérieure la plus proche
          	  			if (it != this->_data.begin()) 
						{	
        	        		it--;
                			factor = it->second;
            			}
					}
					value *= factor;
    	        	std::cout << trimmed_date << " =>" << value_str << " = " << value << std::endl;
				}
    	    }
			else
			{
				std::cout << "Error: bad input => " << date_str << std::endl;
				continue;
			}
    	}
		file.close();
	}
	else
	{
		std::cout << "Error: Cannot Open" << std::endl;
		return ;	
	}
}