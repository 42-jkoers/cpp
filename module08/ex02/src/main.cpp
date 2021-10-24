#include "mutantstack.hpp"

int main() {

	std::cout << "Test MutantStack" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	rit++;
	std::cout << *rit << std::endl;
	std::stack<int> s(mstack);

	// Test for the List (same)

	std::cout << "\n\nTest List (same)" << std::endl;

	std::list<int> list;

	list.push_front(5);
	list.push_front(17);
	std::cout << *list.begin() << std::endl;
	list.pop_front();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator l_it = list.begin();
	std::list<int>::iterator l_ite = list.end();
	++l_it;
	--l_it;
	while (l_it != l_ite) {
		std::cout << *l_it << std::endl;
		++l_it;
	}
	std::list<int>::reverse_iterator l_rit = list.rbegin();
	l_rit++;
	std::cout << *l_rit << std::endl;
	std::cout << std::endl;

	return 0;
}
