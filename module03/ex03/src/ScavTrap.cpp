#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_energyPoints = 50;
	std::cout << "ScavTrap " << _name << " was brought into this world" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was brought into this world" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scavtrap " << _name << " was reduced to atoms" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << _name << " attacks " << target
			  << " causing " << _attackDamage << " amount of damage" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " has entered in gate keeper mode" << std::endl;
}
