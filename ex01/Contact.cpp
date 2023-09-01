#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string	Contact::answer(std::string str)
{
	std::string	answer;

    while (answer.find_first_not_of("\n\t") == std::string::npos)
	{
        std::cout << str;
	    getline(std::cin, answer);
    }
	return (answer);
}

void	Contact::create()
{
	_firstName = answer("Entrez un Prenom :");
	_lastName = answer("Entrez un Nom :");
	_nickName = answer("Quel est le surnom ?");
	_phoneNumber = answer("Entrez le numero de telephone :");
	_darkSecret = answer("Veuillez indiquer son pire secret :");
}

void	Contact::format() const
{
    std::cout << std::setw(10) << _firstName << "|";
	std::cout << std::setw(10) << _lastName << "|";
	std::cout << std::setw(10) << _nickName << "|";
    std::cout << std::endl;
}

void	Contact::resumeSearch() const
{
	std::cout << "| VOICI LE CONTACT QUE VOUS AVEZ DEMADE |" << std::endl;
    std::cout << "Prenom : " << _firstName << std::endl;
	std::cout << "Nom : " << _lastName << std::endl;
    std::cout << "Surnom : " << _nickName << std::endl;
	std::cout << "Numero de Telephone : " << _phoneNumber << std::endl;
	std::cout << "Son plus gros secret : " << _darkSecret << std::endl;
}

int    Contact::emptyContact() const
{
    if (_firstName.empty() == true)
        return (1);
    else
        return(0);
}