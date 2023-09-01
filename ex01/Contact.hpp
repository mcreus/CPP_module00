#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <cstddef>
# include <string>

class	Contact
{
	public:
		Contact();
		~Contact();

		void	create();
		std::string	answer(std::string str);
		void	resumeSearch() const;
		void	format() const;
        int    emptyContact() const;
        std::string fullContact(std::string str);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkSecret;
};

#endif