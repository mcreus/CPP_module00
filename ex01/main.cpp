/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:55:19 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/18 13:03:50 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string command;
    
    std::cout <<"Hello and welcome to you phonebook, Please enter a command (ADD, SEARCH or EXIT):" << std::endl;
    while (1)
    {
        std::cout << "Your command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command, please try again." << std::endl;
    }
    return (0);
}