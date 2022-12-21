/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:41:05 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/11 18:24:55 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_no;
        bool        _init;

    public:
        contact();
        ~contact();
    
        bool    checkInit() const;
        void    printSearchField(std::string data) const;
        void    fillContactInfo();
        void    displaySearchFields(int i) const;
        void    displayContactInfo() const;   
};

# endif