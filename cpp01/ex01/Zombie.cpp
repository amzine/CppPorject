/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:50:21 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/19 01:37:43 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "looney tunes" << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "loooney tunes died" << std::endl;
    return;
}

std::string Zombie::getname()
{
    return(this->_name);   
}

void Zombie::setname(std::string name)
{
    this->_name = name;
    return;
}

void Zombie::announce()
{
    std::cout << "<" << this->_name << "> blitzzzzz......" << std::endl;
    std::cout << "wich is blitzz in english......." << std::endl;
    return;
}

Zombie* zombiehorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    std::string names[] = {"messi", "mbape", "enzo", "martinez", "didee", "boussoufa"};
    int i = 0;
    horde[0].setname(name);
    while (++i < N)
        horde[i].setname(names[i - 1]);
    return horde;
}