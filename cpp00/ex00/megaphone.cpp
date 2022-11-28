/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:18:18 by amimouni          #+#    #+#             */
/*   Updated: 2022/11/28 10:25:15 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(int argc, char const *argv[])
{   
    if (argc == 1)
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str(argv[i]);
            for (size_t j = 0; j < str.length(); j++)
                std::cout << (char)std::toupper(str[j]);    
        }
        std::cout << std::endl;
    }
    return 0;
}
