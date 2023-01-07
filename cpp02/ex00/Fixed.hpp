/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:33:30 by amimouni          #+#    #+#             */
/*   Updated: 2023/01/02 17:30:00 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FIXED_HPP)
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
    int _fixedvalue;
    static const int bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fix);
    Fixed& operator = (const Fixed& fix);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif 
