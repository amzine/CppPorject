/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:40:45 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/20 02:41:08 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
_weapon(weapon),
_name(name)
{
    std::cout << this->_name << " has joined the battle ";
    std::cout << "he carries a " << this->_weapon.getType() << std::endl;
    return;
}

HumanA::~HumanA()
{
    std::cout << this->_name << " has lost the battle" << std::endl;
    return;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return;
}