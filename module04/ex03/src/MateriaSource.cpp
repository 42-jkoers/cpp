#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : current(0) {
	for (size_t i = 0; i < 4; i++)
		sources[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& cp) : current(0) {
	for (size_t i = 0; i < cp.current; i++)
		learnMateria(cp.sources[i]->clone());
	for (size_t i = 0; i < 4; i++)
		sources[i] = 0;
}

MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < current; i++)
		delete sources[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& cp) {
	for (size_t i = 0; i < current; i++)
		delete sources[i];
	current = 0;
	for (size_t i = 0; i < cp.current; i++)
		learnMateria(cp.sources[i]->clone());
	for (size_t i = 0; i < 4; i++)
		sources[i] = 0;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (current == 4 || m == 0)
		return;
	for (size_t i = 0; i < current; i++) {
		if (sources[i] == m)
			return;
	}
	sources[current++] = m;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (size_t i = 0; i < current; i++) {
		if (sources[i]->getType() == type)
			return (sources[i]->clone());
	}
	return 0;
}
