/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:30:12 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/20 02:30:42 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(HUMANB_HPP)
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* _weapon;
    std::string _name;
    bool isarmed;
public:
    HumanB(std::string name);
    ~HumanB();
    
    void attack();
    void setWeapon(Weapon& type);
};

#endif
