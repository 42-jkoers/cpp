#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << _name << " has entered the game" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " has left the game" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cp) {
	*this = cp;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << " causing " << _attackDamage << " amount of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
	_hitPoints -= amount;
	std::cout << "* ClapTrap " << _name << " has " << _hitPoints << " attackDamage *" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " is being repaired by " << amount << " hitpoints" << std::endl;
	_hitPoints -= amount;
	_energyPoints -= amount;
	std::cout << "* ClapTrap " << _name << " has " << _energyPoints << " energy left *" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}
