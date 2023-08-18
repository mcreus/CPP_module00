/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:09:22 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/18 14:03:01 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
    this->_nbContacts = 0;
    this->_oldContact = 0;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void    PhoneBook::addContact(void)
{
    Contact new_contact;
    
    new_contact.create();
    if (this->)
    
}