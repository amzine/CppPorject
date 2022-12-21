/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:50:32 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/19 01:37:00 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(Zombie_hpp)
#define Zombie_hpp

#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    
    std::string getname();
    void setname(std::string name);
    void announce();
};

Zombie* zombiehorde(int N, std::string name);
#endif 
