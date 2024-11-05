#include "contact.hpp"

Contact::~Contact()
{
}

Contact::Contact()
{
	firstName = "First Name";
	lastName = "Last Name";
	nickName = "Nickname";
	phoneNumber = "Phone Number";
	darkestSecret = "Darkest Secret";
}
Contact::Contact(std::string _firstName, std::string _lastName, std::string _nickName, std::string _phoneNumber,  std::string _darkestSecret)
{
	firstName = _firstName;
	lastName = _lastName;
	nickName = _nickName;
	phoneNumber = _phoneNumber;
	darkestSecret = _darkestSecret;
}