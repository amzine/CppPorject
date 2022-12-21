/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 23:13:52 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/11 23:59:32 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
    this->_init = true;
    return;
}

contact::~contact()
{
    return;
}

bool    contact::checkInit() const
{
    return (this->_init);
}

void contact::printSearchField(std::string data) const
{
    if (data.length() > 10)
        std::cout << std::setw(10) << data.substr(0, 9).append(".") << "|";
    else
        std::cout << std::right << std::setfill(' ') <<std::setw(10) << data << "|";
    return;
}

void    contact::displaySearchFields(int i) const
{
    std::cout << "|         " << i + 1 << "|";
    this->printSearchField(this->_first_name);
    this->printSearchField(this->_last_name);
    this->printSearchField(this->_nickname);
    std::cout << std::endl;
    return;
}

void    contact::displayContactInfo() const
{
    std::cout << "First Name    : " << this->_first_name << std::endl;
    std::cout << "Last Name :   " << this->_last_name << std::endl;
    std::cout << "NickName  :   " << this->_nickname << std::endl;
    std::cout <<"phone No. :    " << this->_phone_no << std::endl;
    return;
}
void    contact::fillContactInfo()
{
    std::cout << "What's the FIRST NAME of this person ?" << std::endl;
	std::getline(std::cin, this->_first_name, '\n');
	std::cout << "What's its LAST NAME ?" << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << "And its NICKNAME ?" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "what is phone number" << std::endl;
	std::getline(std::cin, this->_phone_no);
    this->_init = false;
    return;
}