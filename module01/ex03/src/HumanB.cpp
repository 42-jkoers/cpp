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
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
