/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:41:37 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/18 06:44:45 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    if (name == "messi")
		std::cout << "Zombie " << this->_name << " spawned in Haddonfield, Illinois" << std::endl;
	else if (name == "hamdallah")
		std::cout << "Zombie " << this->_name << " spawned in Elm Street's kids deams" << std::endl;
	else
		std::cout << "Zombie " << this->_name << " spawned in Crystal Lake's Camp" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "zombie " << this->_name <<" returned to zombie" << std::endl;
    return;
}
std::string Zombie::getname()
{
    return (this->_name);
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
