/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:12:11 by amimouni          #+#    #+#             */
/*   Updated: 2023/01/02 17:30:07 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "default constructor called" << std::endl;
    this->_fixedvalue = 0;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "default constructor called" << std::endl;
    return ; 
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "copy constructor called"<< std::endl;
    *this = fix;
    return;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
    std::cout << "assignation operation called" << std::endl;
    if(this != &fix)
        this->_fixedvalue = fix.getRawBits();
    return *this;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawbits member function called" << std::endl;
    return this->_fixedvalue;    
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedvalue = raw;
    return ;
}