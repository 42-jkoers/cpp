#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
}

void HumanB::attack() {
	if (!weapon) {
		std::cout << name << " is not armed" << std::endl;
		return;
	}
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
