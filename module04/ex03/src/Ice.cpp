#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice& cp) : AMateria("ice") {
	(void)cp;
}

Ice::~Ice() {
}

Ice& Ice::operator=(const Ice& cp) {
	(void)cp;
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
