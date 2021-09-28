#include <iostream>
#include <sstream>
#include <string>

#define N_CONTACTS 8
#define COLUMN_WIDTH 10

class Contact {
  public:
	Contact() {
		assigned = false;
	}

	void assign(size_t index) {
		std::cout << "    firstName: " << std::ends;
		if (!std::getline(std::cin, firstName))
			return;
		std::cout << "     lastName: " << std::ends;
		if (!std::getline(std::cin, lastName))
			return;
		std::cout << "     nickName: " << std::ends;
		if (!std::getline(std::cin, nickName))
			return;
		std::cout << "  phoneNumber: " << std::ends;
		if (!std::getline(std::cin, phoneNumber))
			return;
		std::cout << "darkestSecret: " << std::ends;
		if (!std::getline(std::cin, darkestSecret))
			return;
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

		for (size_t i = len; i < COLUMN_WIDTH; i++)
			std::cout << " ";
		if (len > COLUMN_WIDTH - 1)
			std::cout << str.substr(0, COLUMN_WIDTH - 1) + ".";
		else
			std::cout << str;
		std::cout << "|";
	}
};

class PhoneBook {
  public:
	PhoneBook() {
		assignedContacts = 0;
	}
	void add() {
		contacts[assignedContacts].assign(assignedContacts);
		assignedContacts++;
		if (assignedContacts == N_CONTACTS)
			assignedContacts = 0;
	}

	void search() {
		for (size_t i = 0; i < N_CONTACTS; i++)
			contacts[i].printColumn();
		std::cout << "Input index: " << std::ends;
		std::string input;
		size_t		phonebookI;
		if (!std::getline(std::cin, input) || !tryParse(input, phonebookI) || phonebookI >= assignedContacts)
			std::cout << "Invalid index" << std::endl;
		else
			contacts[phonebookI].printInfo();
	}

  private:
	bool tryParse(std::string& input, size_t& output) {
		try {
			output = std::stoul(input);
		} catch (std::invalid_argument) {
			return false;
		}
		return true;
	}
	size_t	assignedContacts;
	Contact contacts[N_CONTACTS];
};

int main() {
	std::string input;
	PhoneBook	phoneBook;

	while (true) {
		std::cout << "$> " << std::ends;
		if (!std::getline(std::cin, input) || input == "EXIT") {
			std::cout << "stopppppp" << std::endl;
			break;
		}
		if (input == "ADD") {
			phoneBook.add();
		} else if (input == "SEARCH")
			phoneBook.search();
	}
	return 0;
}
