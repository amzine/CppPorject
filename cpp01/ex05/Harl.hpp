/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 06:47:58 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/21 00:01:03 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#if !defined(HARL_HPP)
# define HARL_HPP

#include <iostream>

class Harl
{
private:
    void debug();
    void info();
    void warning();
    void error();
public:
    Harl();
    ~Harl();

    void complain(std::string level);
};

#endif 
