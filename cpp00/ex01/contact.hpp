#pragma ONCE
#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		~Contact();
		Contact();
		Contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber,  std::string _darkestSecret);
};

#endif