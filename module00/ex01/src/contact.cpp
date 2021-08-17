#include <iostream>
#include <string>
#include <sstream>

#define N_CONTACTS 8
#define TAB_WIDTH 10

class Contact
{
	void column(std::string str)
	{
		const size_t len = str.length();

		for (size_t i = len; i < TAB_WIDTH; i++)
			std::cout << " ";
		if (len > TAB_WIDTH - 1)
			std::cout << str.substr(0, TAB_WIDTH - 1) + ".";
		else
			std::cout << str;
		std::cout << "|";
	}

public:
	bool assigned;
	size_t i;

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	void printColumn()
	{
		if (!assigned)
			return;
		std::cout << "|         " << i << "|";
		column(firstName);
		column(lastName);
		column(nickName);
		std::cout << "|" << std::endl;
	}

	void printInfo()
	{
		std::cout << "    firstName: " << firstName << "\n";
		std::cout << "     lastName: " << lastName << "\n";
		std::cout << "     nickName: " << nickName << "\n";
		std::cout << "  phoneNumber: " << phoneNumber << "\n";
		std::cout << "darkestSecret: " << darkestSecret << std::endl;
	}

	void assign(size_t index)
	{
		std::cout << "    firstName: ";
		std::getline(std::cin, firstName);
		std::cout << "     lastName: ";
		std::getline(std::cin, lastName);
		std::cout << "     nickName: ";
		std::getline(std::cin, nickName);
		std::cout << "  phoneNumber: ";
		std::getline(std::cin, phoneNumber);
		std::cout << "darkestSecret: ";
		std::getline(std::cin, darkestSecret);
		i = index;
		assigned = true;
	}
};

int main()
{
	size_t i = 0;
	Contact contacts[N_CONTACTS];
	std::string input;

	for (size_t i = 0; i < N_CONTACTS; i++)
		contacts[i].assigned = false;
	while (true)
	{
		std::cout << "$> ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD")
		{
			contacts[i].assign(i);
			i++;
			if (i == N_CONTACTS)
				i = 0;
		}
		else if (input == "SEARCH")
		{
			for (size_t i = 0; i < N_CONTACTS; i++)
				contacts[i].printColumn();
			size_t i;
			std::cin >> i;
			if (i + 1 < N_CONTACTS)
				contacts[i].printInfo();
			else
				std::cout << "Invalid index, range 0 -" << N_CONTACTS - 1 << std::endl;
		}
	}
}
