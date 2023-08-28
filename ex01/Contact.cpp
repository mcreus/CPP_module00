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

std::string	Contact::Answer(std::string str)
{
	std::string	Answer;

	while (Answer.find_first_not_of("\t\n\v\r\f") == std::string::npos)
	{
		std::cout << str;
		getline(std::cin, Answer);
	}
	return (Answer);
	/*std::getline(std::cin, Answer);

	std::cout << "Entrez un Prenom" << std::endl;
	std::cin >> _FirstName;
	std::cout << "Entrez un Nom" << std::endl;
	std::cin >> _LastName;
	std::cout << "Quel est son surnom ?" << std::endl;
	std::cin >> _NickName;
	std::cout << "Entrez son numero de telephone (sans espace et sans point)" << std::endl;
	std::cin >> _PhoneNumber;
	std::cout << "Veuillez indiquer son secret le plus sombre !!!" << std::endl;*/
}

void	Contact::Create()
{
	_FirstName = Answer("Entrez un Prenom :");
	_LastName = Answer("Entrez un Nom :");
	_NickName = Answer("Quel est le surnom ?");
	_PhoneNumber = Answer("Entrez le numero de telephone :");
	_DarkSecret = Answer("Veuillez indiquer son pire secret :");
}

void	Contact::Format() const
{
	std::cout << std::setw(10) << _FirstName << "|";
	std::cout << std::setw(10) << _LastName << "|";
	std::cout << std::setw(10) << _NickName << "|";
	std::cout << std::endl;
}

void	Contact::ResumeSearch() const
{
	if (_FirstName.empty() == true)
		std::cout << "LISTE VIDE" << std::endl;
	std::cout << "[VOICI LE CONTACT QUE VOUS AVEZ DEMADE]" << std::endl;
	std::cout << "Prenom : " << _FirstName << std::endl;
	std::cout << "Nom : " << _LastName << std::endl;
	std::cout << "Surnom : " << _NickName << std::endl;
	std::cout << "Numero de Telephone : " << _PhoneNumber << std::endl;
	std::cout << "Son plus gros secret : " << _DarkSecret << std::endl;
}