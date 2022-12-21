/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:06:06 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/20 06:35:22 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int error(std::string error)
{
    std::cout << "error : " << error << std::endl;
    return(1); 
}
int main(int argc, char const *argv[])
{
    if (argc != 4)
        return(error("too few arguments"));
    if (!argv[2] || !argv[3])
        return(error("empty strings"));
    
    std::ifstream file(argv[1]);
    std::string   filename;
    std::string content;
    std::string s1;
    std::string s2;
    std::stringstream buff;
    size_t pos;
    if (file.is_open())
    {
        pos = 0;
        s1 = argv[2];
        s2 = argv[3];
        filename = argv[1];
        filename.append(".replace");
        std::ofstream output(filename);
        
        buff << file.rdbuf();
        content = buff.str();
        while ((pos = content.find(s1, pos)) != std::string::npos)
        {
            content.erase(pos, s1.length());
            content.insert(pos, s2);
            pos = s2.length();
        }
        output << content;
    }
    else
        return(error("file does not exist"));
    return 0;
}
