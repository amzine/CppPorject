/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:02:01 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/13 22:31:18 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook()
{
    this->_index = 0;
    return ;
}

phonebook::~phonebook()
{
    return ;
}

void    phonebook::searchContact() const
{
    int i = 0;
    std::string temp;
    if (this->_contact[0].checkInit())
    {
        std::cout << "phonebook is empty !!" << std::endl;
    }
    else
    {
        std::cout << "index | first name | last name | nickname" << std::endl;
        while (i < 8 && !this->_contact[i].checkInit())
        {
            this->_contact[i].displaySearchFields(i);
            i++;
        }
        std::cout << "enter a valid index number " << std::endl;
        std::getline(std::cin, temp);
        if (temp[0] > '0' && temp[0] < '8' && !temp[1])
        {
            i = atoi(temp.c_str());
            if (i >= 1 && i <= 8)
                this->_contact[i - 1].displayContactInfo();
        }
        else
            std::cout << "Index num incorrect ..!!"<< std::endl;        
    }
    return ;
}

void    phonebook::addContact()
{
    this->_index %= 8;
    this->_contact[this->_index].fillContactInfo();
    this->_index++;
    return ;
}