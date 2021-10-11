#include "Character.hpp"

Character::Character(const std::string& name) : name(name), equipped(0) {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		inventory[i] = 0;
}

Character::~Character() {
	for (int i = 0; i < equipped; i++) {
		if (inventory[i])
			delete inventory[i];
	}
}

const std::string& Character::getName() const { return name; }
//
void Character::equip(AMateria* m) {
	if (m == 0)
		return;
	if (equipped == INVENTORY_SIZE)
		return;
	for (int i = 0; i < equipped; i++) {
		if (inventory[i] == m)
			return;
	}
	inventory[equipped++] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= equipped || inventory[idx] == 0)
		return;
	for (int i = idx; i < INVENTORY_SIZE - 1; i++) {
		inventory[i] = inventory[i + 1];
		inventory[i + 1] = 0;
	}
	equipped--;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= equipped || inventory[idx] == 0)
		return;
	inventory[idx]->use(target);
}

// boilerplate
Character::Character(const Character& cp) { *this = cp; }
Character& Character::operator=(const Character& cp) {
	(void)cp;
	return *this;
}
