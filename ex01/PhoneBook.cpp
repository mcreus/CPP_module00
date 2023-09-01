#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    _idxContact = 1;
    _oldContact = 1;
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
    if (_idxContact >= 9)
        _idxContact = 1;
    _contact[_idxContact] = newContact;
    _idxContact++;
}

void    PhoneBook::searchContact()
{
    std::string whatContact;
    PhoneBook   phoneBook;
    
    phoneBook.resumeContact();
    std::cout << "Entrez un index de recherche :" << std::endl;
    std::getline(std::cin, whatContact);
    if (_idxContact == false)
    {
        std::cout << "INDEX CONTACT ERRONE, ENTREZ UN NOUVEL INDEX" << std::endl;
        std::cin >> _idxContact;
    }
    else
    {
        if (_contact[_idxContact].emptyContact() == 1)
        {
            std::cout << "MERCI DE REMPLIR L'INDEX D'UN CONTACT PLEIN!" << std::endl;
            std::cin >> _idxContact;
        }
        else
            _contact[_idxContact].resumeSearch();
    }
}

void    PhoneBook::resumeContact()
{
    while (_oldContact < 9)
    {
        if (_contact[_oldContact].emptyContact() == 1)
        {
            std::cout << _oldContact << "|";
            _contact[_oldContact].format();
        }
        _oldContact++;
        std::cout << std::endl;
    }
}