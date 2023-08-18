/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:34:05 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/18 12:57:39 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);

    void    addContact(void);
    void    searchContact(void);
    
private:

    Contact _contacts[8];
    int     _nbContacts;
    int     _oldContact;
};

#endif