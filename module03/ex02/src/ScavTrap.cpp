#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Peanut", 100, 50, 20) {
	std::cout << "ScavTrap " << name << " was brought into this world " << hitPoints << " " << energyPoints << " " << attackDamage << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << name << " was brought into this world " << hitPoints << " " << energyPoints << " " << attackDamage << std::endl;
}

ScavTrap::ScavTrap(std::string	name,
				   unsigned int hitPoints,
				   unsigned int energyPoints,
				   unsigned int attackDamage) : ClapTrap(name, hitPoints, energyPoints, attackDamage) {
	std::cout << "ScavTrap " << name << " was brought into this world" << std::endl;
}

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
void ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << name << " attacked " << target << " with " << attackDamage << " damage" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " has entered in gate keeper mode" << std::endl;
}
