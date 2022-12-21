/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:25:07 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/19 23:29:28 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(HUMANA_HPP)
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon& _weapon;
    std::string _name;
public:
    HumanA(std::string _name, Weapon& weapon);
    ~HumanA();
    
    void attack();
};

#endif  
