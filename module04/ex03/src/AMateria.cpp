#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type) {}

const std::string& AMateria::getType() const { return type; }

// what is this supposed to do?
void AMateria::use(ICharacter& target) {
	(void)target;
}

//boilerplate
AMateria::~AMateria() {}
AMateria::AMateria(const AMateria& cp) { *this = cp; }
AMateria& AMateria::operator=(const AMateria& cp) {
	(void)cp;
	return *this;
}
