#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    _IdxContact = 1;
    _oldContact = 1;
    return ;
}

PhoneBook::~PhoneBook()
{
    return ;
}

void    PhoneBook::Add_Contact()
{
    Contact NewContact;

    NewContact.Create();
    if (_IdxContact >= 9)
        _IdxContact = 1;
    _Contact[_IdxContact] = NewContact;
    _IdxContact++;
}

void    PhoneBook::Search_Contact()
{
    std::string ContactSearched;

    if (ContactSearched[_IdxContact] == false)
        std::cout << "INDEX CONTACT ERRONE, ENTREZ UN NOUVEL INDEX" << std::endl;
    else
        _Contact[_IdxContact].ResumeSearch();
}