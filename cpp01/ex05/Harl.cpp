/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 06:47:55 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/21 01:30:03 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "harl just started" << std::endl;
    return;
}

Harl::~Harl()
{
    std::cout << "harl left the room" << std::endl;
    return;
}

void Harl::complain(std::string level)
{
        int i = 0;
        void  (Harl::*touse)() = NULL;
        bool iscorrect = false;
        struct complaint
        {
            std::string lev;
            void (Harl::*foo)();
        }mystruct[4] = 
        {
            {"debug", &Harl::debug},
            {"info", &Harl::info},
            {"warning", &Harl::warning},
            {"error", &Harl::error}
        };
        while (i < 4)
        {
            if (mystruct[i].lev == level)
            {
                iscorrect = true;
                touse = mystruct[i].foo;
            }
            i++;
        }
        if (touse != NULL)
		    (this->*touse)();
        if (!iscorrect)
            std::cout << "harl has nothing to complain about !!!!" << std::endl;
} 
void  Harl::debug()
{
    std::cout << "i need a burger with bacon on it , if you don't maind please" << std::endl;

}
void	Harl::info()
{
	std::cout << "harl says: < And where should the documentation be? there is nothing here, only a bunch of jibber jabber I cannot read! Manager. NOOOW!!! >" << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout << "harl says: < Are you dead serious? What do you want me to do with all this bunch of unused parameters? get me your C.E.O. now! >" << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout << "harl says: < I don't understand Karen memes! Hence I don't like them! I want to speak to your manager! >" << std::endl;
	return ;
}
