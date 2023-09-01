#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    _idxContact = 0;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void    PhoneBook::addContact()
{
    Contact newContact;

    std::cout << "L'index de votre contact est : " << _idxContact << std::endl;
    newContact.create();
    if (_idxContact >= 8)
        _idxContact = 0;
    _contact[_idxContact] = newContact;
    _idxContact++;
}

void    PhoneBook::searchContact()
{
    std::string whatContact;
    
    std::cout << "Entrez un index de recherche :" << std::endl;
    std::getline(std::cin, whatContact);
    if (whatContact[0] >= '0' && whatContact[0] <= '7') 
    {
        if (_contact[whatContact[0] - 48].emptyContact() == 1)
            std::cout << "ERREUR! INDEX VIDE" << std::endl;
        else
            _contact[whatContact[0] - 48].resumeSearch();
    }
    else
        std::cout << "ERREUR INDEX NON VALIDE " << std::endl;
}

void    PhoneBook::resumeContact()
{
    int oldContact;

    oldContact = 0;
    while (oldContact < 8)
    {
        std::cout << std::setw(10) << oldContact << "|";
        _contact[oldContact].format();
        std::cout << std::endl;
        oldContact++;
    }
}