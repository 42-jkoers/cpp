#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

const std::string& Weapon::getType() {
	return type;
}

Weapon::Weapon(std::string type) {
	this->type = type;
}
