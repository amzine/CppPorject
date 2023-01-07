/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:45:28 by amimouni          #+#    #+#             */
/*   Updated: 2023/01/02 19:00:13 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    static const int bits = 8;
    int _fixeddvalue;
public:
    Fixed();
    Fixed(const Fixed &fix);
    
    Fixed(const int ival);
    Fixed(const float fval);
    Fixed& operator = (const Fixed& fix);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int const raw);

    float Tofloat(void) const;
    int ToInt(void) const;
    
};
std::ostream &operator << (std::ostream &output, Fixed& fix);
#endif 


