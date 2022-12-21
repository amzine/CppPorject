/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:32:29 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/13 23:15:17 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    std::string input;
    phonebook phn;
    
    std::cout << "welcome to my phone phonebook " << std::endl;
    std::cout << "what do you want to chose " << std::endl << "[ADD] [SEARCH] [EXIT] " << std::endl;
    std::getline(std::cin, input, '\n');
    while (input != "EXIT")
    {
        if (input == "ADD")
        {
            std::cout << "your choice is [ADD]" << std::endl;
            phn.addContact();
        }
        else if (input == "SEARCH")
        {
            std::cout << "yout choice is [SEARCH]" << std::endl;
            phn.searchContact();
        }
        else
            std::cout << "try again please ..." << std::endl <<"[ADD] [SEARCH] [EXIT]" << std::endl;
        std::cout <<"[ADD] [SEARCH] [EXIT]" << std::endl;
        std::getline(std::cin, input, '\n');
    }
    std::cout << "Quit !!" << std::endl;
    return 0;
}
