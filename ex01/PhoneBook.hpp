#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void    Add_Contact();
		void    Search_Contact();
	private:
		Contact _Contact[8];
		int	_IdxContact;
		int	_oldContact;

};

#endif