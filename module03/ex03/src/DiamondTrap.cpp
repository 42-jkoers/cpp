#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(), FragTrap() {
	_name = name;
	std::cout << "DiamondTrap " << _name << " has entered the game" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << _name << " has left the game" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) {
	*this = original;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << _name << std::endl;
}
