#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* jeff = new Character("jeff");
	jeff->equip(src->createMateria("ice"));
	jeff->equip(src->createMateria("cure"));
	jeff->equip(src->createMateria("ice"));

	ICharacter* leo = new Character("leo");
	jeff->use(0, *leo);
	jeff->use(1, *leo);
	jeff->use(2, *leo);
	jeff->use(3, *leo);
	jeff->use(-1, *leo);

	std::cout << "Unequip 3rd" << std::endl;
	jeff->unequip(2);
	jeff->use(2, *leo);

	delete leo;
	delete jeff;
	delete src;
	return (0);
}
