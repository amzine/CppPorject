/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 00:50:19 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/20 02:41:59 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->isarmed = false;
    
    std::cout << this->_name << " has joined the battle" << std::endl;
    return ;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " has lost the battle" << std::endl;
    return;
}

void HumanB::attack()
{
    if (isarmed)
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " is unarmed , but he attack the enemy with bare hands" << std::endl;
    return;
}

void HumanB::setWeapon(Weapon& type)
{
    srand(time(NULL));
    this->isarmed = rand() % 2;
    this->_weapon = &type;
}
