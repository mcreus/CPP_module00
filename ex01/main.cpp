#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	PhoneBook;
	Contact		Contact;
	std::string	cmd;

	std::cout << "Bonjour et bienvenue sur le PhoneBook de Max" << std::endl;
	while (42)
	{
		std::cout << "Entrez la commande que vous souhaitez faire (ADD, SEARCH or EXIT) : " << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			PhoneBook.Add_Contact();
		if (cmd == "SEARCH")
			PhoneBook.Search_Contact();
		if (cmd == "EXIT")
			break ;
		else
			std::cout << " Votre commande n'est pas une commande valide, veuillez entrer un des 3 choix proposes auparavant" << std::endl;
	}
	return (0);
}