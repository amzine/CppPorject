/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amimouni <amimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:22:09 by amimouni          #+#    #+#             */
/*   Updated: 2022/12/12 00:56:24 by amimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>

class phonebook
{
    private:
        int _index;
        contact _contact[8];
    public:
        phonebook();
        ~phonebook();
    void    searchContact() const;
    void    addContact();        
};
#endif 
