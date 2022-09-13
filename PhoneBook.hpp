#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class PhoneBook
{
	public:
		// Constructors
		PhoneBook();
		PhoneBook(const PhoneBook &copy);
		PhoneBook(int start, int end, Contacts[9] contacts);
		
		// Destructor
		~PhoneBook();
		
		// Operators
		PhoneBook & operator=(const PhoneBook &assign);
		
		// Getters / Setters
		Contacts[9] getContacts() const;
		void setContacts(Contacts[9] contacts);
		
	private:
		int _start;
		int _end;
		Contacts[9] _contacts;
		
};

#endif