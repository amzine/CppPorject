/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:40:50 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/19 23:46:58 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type)
{
    return;   
}

Weapon::~Weapon()
{
    return;
}

const std::string& Weapon::getType()
{
    return (this->_type);
}
void Weapon::setType(std::string type)
{
    this->_type = type;
}