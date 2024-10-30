#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
	private:
		std::string firstname;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		~Contact();
		Contact();
}

#endif