#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	_name = name;
	std::cout << "DiamondTrap " << _name << " has entered the game " << _hitPoints << " " << _energyPoints << " " << _attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " imploded" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) { *this = original; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << "name: " << _name << " clapname: " << ClapTrap::_name << std::endl;
}
