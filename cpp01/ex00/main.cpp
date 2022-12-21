/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 06:30:44 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/18 06:39:17 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie messi("hamdallah");
    messi.announce();
    
    randomChump("jason");
    Zombie *dead = newZombie("messi");
    dead->announce();
    delete dead;
    
    return 0;
}
