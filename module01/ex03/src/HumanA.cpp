#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
	this->name = name;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << _weapon.getType() << std::endl;
}
