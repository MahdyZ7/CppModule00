#include "PhoneBook.hpp"

// Constructors
PhoneBook::PhoneBook()
{
	_start = 0;
	_end = 0;
	_contacts = 0;
	std::cout << "\e[0;33mDefault Constructor called of PhoneBook\e[0m" << std::endl;
}

PhoneBook::PhoneBook(const PhoneBook &copy)
{
	_start = copy.getStart();
	_end = copy.getEnd();
	_contacts = copy.getContacts();
	std::cout << "\e[0;33mCopy Constructor called of PhoneBook\e[0m" << std::endl;
}

PhoneBook::PhoneBook(int start, int end, Contacts[9] contacts)
{
	_start = start;
	_end = end;
	_contacts = contacts;
	std::cout << "\e[0;33mFields Constructor called of PhoneBook\e[0m" << std::endl;
}


// Destructor
PhoneBook::~PhoneBook()
{
	std::cout << "\e[0;31mDestructor called of PhoneBook\e[0m" << std::endl;
}


// Operators
PhoneBook & PhoneBook::operator=(const PhoneBook &assign)
{
	_start = assign.getStart();
	_end = assign.getEnd();
	_contacts = assign.getContacts();
	return *this;
}


// Getters / Setters
Contacts[9] PhoneBook::getContacts() const
{
	return _contacts;
}
void PhoneBook::setContacts(Contacts[9] contacts)
{
	_contacts = contacts;
}

