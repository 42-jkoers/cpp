#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Peanut", 100, 50, 20) {}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20) {}

ScavTrap::ScavTrap(const ScavTrap& cp) {
	*this = cp;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scavtrap " << name << " was reduced to atoms" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cp) {
	hitPoints = cp.hitPoints;
	energyPoints = cp.energyPoints;
	attackDamage = cp.attackDamage;
	initalHitPoints = cp.initalHitPoints;
	initialEnergyPoints = cp.initialEnergyPoints;
	initialAttackDamage = cp.initialAttackDamage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered in gate keeper mode" << std::endl;
}
