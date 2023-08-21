/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:09:22 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/21 20:27:52 by mcreus           ###   ########.fr       */
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
    if (this->_nbContacts >= 8)
        this->_nbContacts = 0;
    this->_contacts[this->_nbContacts] = new_contact;
    this->_nbContacts++;
}

void    PhoneBook::searchContact(void)
{
    std::string what_contact;
    int         index;

    index = 0;
    /*if (index < 8)
    {
        std::cout << std::setw(10) << index << "|";
        this->_contacts[index].display_resume();
    }*/
    std::cout << "Entrez l'index du contact que vous souhaitez consulter : ";
    std::getline(std::cin, what_contact);
    if(what_contact[0] >= '0' && what_contact[0] <= '7' && what_contact.length() == 1)
        this->_contacts[what_contact[0] - '0'].display_all_infos();
    else
        std::cout << "[WARNING!!!!] Index invalide" << std::endl;
}