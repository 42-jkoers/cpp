#include "../include/FragTrap.hpp"

FragTrap::FragTrap() {
	_hitPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has joined the realm of the living" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has joined the realm of the living" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " fell into the void" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}

void FragTrap::attack(const std::string& target) {
	std::cout << "FragTrap " << _name << " attacked " << target << " with " << _attackDamage << " damage" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " made a positive high five request" << std::endl;
}
