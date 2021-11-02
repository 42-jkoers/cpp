#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Peanut", 100, 100, 30) {
	std::cout << "FragTrap " << name << " has joined the realm of the living" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << name << " has joined the realm of the living" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cp) {
	*this = cp;
	std::cout << "FragTrap " << name << " has joined the realm of the living" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " fell into the void" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cp) {
	hitPoints = cp.hitPoints;
	energyPoints = cp.energyPoints;
	attackDamage = cp.attackDamage;
	initalHitPoints = cp.initalHitPoints;
	initialEnergyPoints = cp.initialEnergyPoints;
	initialAttackDamage = cp.initialAttackDamage;
	return *this;
}

void FragTrap::highFiveGuys() {
	std::cout << "FragTrap " << name << " made a positive high five request" << std::endl;
}
