#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(const Cure& cp) : AMateria("cure") {
	(void)cp;
}

Cure::~Cure() {
}

Cure& Cure::operator=(const Cure& cp) {
	(void)cp;
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
