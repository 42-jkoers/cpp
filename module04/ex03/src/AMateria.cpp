#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type) {
}

AMateria::AMateria(const AMateria& cp) {
	*this = cp;
}

AMateria& AMateria::operator=(const AMateria& cp) {
	type = cp.getType();
	return (*this);
}

AMateria::~AMateria() {
}

const std::string& AMateria::getType() const {
	return (type);
}

void AMateria::use(ICharacter& target) {
	(void)target;
}
