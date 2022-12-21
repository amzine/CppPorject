/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 01:29:59 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/19 01:35:17 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie	*horde;
	int		nbZombies = 8;
	int		i = 0;
	
	horde = zombiehorde(nbZombies, "ramos");
	while (i < nbZombies)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
