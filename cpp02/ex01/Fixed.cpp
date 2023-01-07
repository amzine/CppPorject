/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:05:08 by amimouni          #+#    #+#             */
/*   Updated: 2023/01/02 18:59:37 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "default constructor called" << std::endl;
    this->_fixeddvalue;
    return;
}

Fixed::~Fixed()
{   std::cout << "default constructor called" << std::endl;
    return ; 
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "copy constructor called" << std::endl;
    *this = fix;
    return;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
    std::cout << "assignation operation called" << std::endl;
    if (this != &fix)
        this->_fixeddvalue = fix.getRawBits();
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawbits member function called" << std::endl;
    return this->_fixeddvalue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixeddvalue = raw;
    return;
}

Fixed::Fixed(const int ival)
{
    std::cout << "int constructor called" << std::endl;
    this->_fixeddvalue = ival << this->bits;
    return;
}
Fixed::Fixed(const float fval)
{
    std::cout << "float constructor called" << std::endl;
    this->_fixeddvalue = (int)

}

