#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstddef>
# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void    addContact();
		void    searchContact();
        void    resumeContact();
	private:
		Contact _contact[8];
		int	_idxContact;

};

#endif