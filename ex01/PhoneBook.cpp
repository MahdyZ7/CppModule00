
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): tail(0), len(0), size(8){}

PhoneBook::~PhoneBook(){}

void PhoneBook::addContact(Contact person)
{
	arr[tail] = person;
	tail = (tail + 1) % size;
	if (len < size)
		++len;
}

int PhoneBook::printContacts()
{
	std::string	fn;
	std::string ln;
	std::string nn;

	if (len == 0)
	{
		std::cout << "\t---\tContact list Empty\t---\n";
		return (1);
	}
	std::cout << "--------------------------------------------\n";
	std::cout << "|  Index" << std::setw(3) << "|";
	std::cout << "First Name" << std::setw(1) << "|";
	std::cout << " Last Name" << std::setw(1) << "|";
	std::cout << " Nickname" << std::setw(3) << "|\n";
	std::cout << "--------------------------------------------\n";
	for (int i = 0; i < len; ++i)
	{
		fn = arr[i].getFirstName();
		ln = arr[i].getLastName();
		nn = arr[i].getNickname();
		fn.size() > 9 ? fn = fn.substr(0 , 9) + "." : fn;
		ln.size() > 9 ? ln = ln.substr(0 , 9) + "." : ln;
		nn.size() > 9 ? nn = nn.substr(0 , 9) + "." : nn;
		std::cout <<"| " << std::setw(4) << i + 1 << std::setw(5) << "|";
		std::cout << std::setw(10 ) << fn << std::setw(1) << "|";
		std::cout << std::setw(10) << ln << std::setw(1) << "|";
		std::cout << std::setw(10) << nn << std::setw(1) << "|\n";
	}
	std::cout << "--------------------------------------------\n";
	return (0);
	
}

int PhoneBook::printIndex(int i)
{
	if (i < 1 || i > len)
	{
		std::cout << "\t---\toops, invalid index. Silly you\t---\n";
		return (1);
	}
	--i;
	std::cout << "Firts Name:\t" << arr[i].getFirstName() << std::endl;
	std::cout << "Last Name:\t" << arr[i].getLastName() << std::endl;
	std::cout << "Nickname:\t" << arr[i].getNickname() << std::endl;
	std::cout << "Phone number:\t" << arr[i].getPhoneNumber() << std::endl;
	std::cout << "The Secret is:\t" << arr[i].getSecret() << std::endl;
	return (0);
}
