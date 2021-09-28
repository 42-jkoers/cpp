#include <iostream>
#include <sstream>
#include <string>

#define N_CONTACTS 8
#define TAB_WIDTH 10

class Contact {
  public:
	Contact() {
		assigned = false;
	}

	void assign(size_t index) {
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

	void printColumn() {
		if (!assigned)
			return;
		std::cout << "|         " << i << "|";
		column(firstName);
		column(lastName);
		column(nickName);
		std::cout << std::endl;
	}

	void printInfo() {
		if (!assigned)
			return;
		std::cout << "    firstName: " << firstName << "\n";
		std::cout << "     lastName: " << lastName << "\n";
		std::cout << "     nickName: " << nickName << "\n";
		std::cout << "  phoneNumber: " << phoneNumber << "\n";
		std::cout << "darkestSecret: " << darkestSecret << std::endl;
	}

  private:
	bool		assigned;
	size_t		i;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	//
	void column(std::string str) {
		const size_t len = str.length();

		for (size_t i = len; i < TAB_WIDTH; i++)
			std::cout << " ";
		if (len > TAB_WIDTH - 1)
			std::cout << str.substr(0, TAB_WIDTH - 1) + ".";
		else
			std::cout << str;
		std::cout << "|";
	}
};

class PhoneBook {
  public:
	PhoneBook() {
		i = 0;
	}
	void add() {
		contacts[i].assign(i);
		i++;
		if (i == N_CONTACTS)
			i = 0;
	}

	void search() {
		for (size_t i = 0; i < N_CONTACTS; i++)
			contacts[i].printColumn();
		std::cout << "Input index:" << std::ends;
		size_t		i;
		std::string in;
		std::getline(std::cin, in);
		i = std::stoul(in.c_str());
		if (i + 1 < N_CONTACTS)
			contacts[i].printInfo();
		else
			std::cout << "Invalid index, range: 0-" << N_CONTACTS - 1 << std::endl;
	}

  private:
	size_t	i;
	Contact contacts[N_CONTACTS];
};

int main() {
	std::string input;
	PhoneBook	phoneBook;

	while (true) {
		std::cout << "$> " << std::ends;
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		else if (input == "ADD") {
			phoneBook.add();
		} else if (input == "SEARCH")
			phoneBook.search();
	}
	return 0;
}
