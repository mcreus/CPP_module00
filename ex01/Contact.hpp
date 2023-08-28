#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class	Contact
{
	public:
		Contact();
		~Contact();

		void	Create();
		std::string	Answer(std::string str);
		void	ResumeSearch();
		void	Format();
	private:
		std::string	_FirstName;
		std::string	_LastName;
		std::string	_NickName;
		std::string	_PhoneNumber;
		std::string	_DarkSecret;
};

#endif