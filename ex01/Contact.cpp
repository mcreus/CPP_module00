/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:04:12 by mcreus            #+#    #+#             */
/*   Updated: 2023/08/21 20:21:29 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::create(void)
{
    this->_first_name = this->_add_info("Entrez le prenom : ");
    this->_last_name = this->_add_info("Entrez le nom : ");
    this->_nickname = this->_add_info("Entrez le surnom : ");
    this->_phone_number = this->_add_info("Entrez le numero de telephone : ");
    this->_darkest_secret = this->_add_info("Entrez le secret le plus sombre : ");
}

std::string	Contact::_add_info(std::string str) const
{
	std::string	info;
	
	while (info.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
	{
		std::cout << str;
		std::getline(std::cin, info);
	}
	return (info);
}

void	Contact::display_resume(void) const
{
	std::cout << std::setw(10) << this->_format_info(this->_first_name) << "|";
	std::cout << std::setw(10) << this->_format_info(this->_last_name) << "|";
	std::cout << std::setw(10) << this->_format_info(this->_nickname) << "|";
	std::cout << std::setw(10) << this->_format_info(this->_phone_number) << "|";
	std::cout << std::setw(10) << this->_format_info(this->_darkest_secret) << "|";
	std::cout << std::endl;
}

std::string	Contact::_format_info(std::string info) const
{
	if (info.empty() == true)
		return ("vide");
	if (info.size() >= 10)
		return (info.substr(0, 9) + '.');
	return (info);
}

void	Contact::display_all_infos(void) const
{
	if (this->_first_name.empty())
	{
		std::cout << "[WARNING!!!!] Contacts vides" << std::endl;
		return ;
	}
	std::cout << "[INFORMATIONS SUR LE CONTACT]" << std::endl;
	std::cout << "Prenom : " << this->_first_name << std::endl;
	std::cout << "Nom : " << this->_last_name << std::endl;
	std::cout << "Surnom : " << this->_nickname << std::endl;
	std::cout << "Numero de telephone : " << this->_phone_number << std::endl;
	std::cout << "secret le plus lourd : " << this->_darkest_secret << std::endl;	
}