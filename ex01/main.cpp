#include <iostream>
#include "PhoneBook.hpp"


void	add_contact(PhoneBook *p1)
{
	int			err = 0;
	Contact 	temp;
	std::string usr_input;

	std::cout << "Enter First Name: ";
	getline(std::cin, usr_input);
	err += temp.setFirstName(usr_input);
	std::cout << "Enter Last Name: ";
	getline(std::cin, usr_input);
	err += temp.setLastName(usr_input);
	std::cout << "Enter Nickname: ";
	getline(std::cin, usr_input);
	err += temp.setNickname(usr_input);
	std::cout << "Enter Phone Number: ";
	getline(std::cin, usr_input);
	err += temp.setPhoneNumber(usr_input);
	std::cout << "Enter your deepest darkest secret: ";
	getline(std::cin, usr_input);
	err += temp.setSecret(usr_input);
	if (err)
		std::cout << "Invalid inputs, try again\n";
	else
		p1->addContact(temp);
}

int	main(void)
{
	PhoneBook		p1;
	std::string		usr_input;

	std::cout << "Welcome to our first contacts program ..." << std::endl;
	while (1)
	{
		std::cout << "Enter a comand: [ADD, SEARCH, EXIT]" << std::endl;
		getline(std::cin, usr_input);
		if (usr_input == "EXIT")
			break;
		else if (usr_input == "ADD")
			add_contact(&p1);
		else if (usr_input == "SEARCH")
		{
			int x;
			if (p1.printContacts() == 0)
			{
				std::cout << "Select the index of from contact list\n";
				std::cout << "The index is: ";
				std::cin >> x;
				std::cin.clear();
				std::cin.ignore();
				p1.printIndex(x);
			}
		}
		if (std::cin.eof()==1) 
			break;
	}
	std::cout << "\nsee you around\n";
	return (0);
}