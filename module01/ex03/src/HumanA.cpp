#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name),
												   _weapon(weapon) {}

void HumanA::attack() {
	std::cout << name << " attacks with his " << _weapon.getType() << std::endl;
}
