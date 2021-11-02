#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Claptrap " << _name << " has received the gift of life" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap " << _name << " was obliterated" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cp) {
	*this = cp;
	std::cout << "Claptrap " << _name << " has received the gift of life" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target
			  << " causing " << _attackDamage << " amount of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Claptrap " << _name << " received " << amount << " damage" << std::endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Claptrap " << _name << " recoverd " << amount << " HP" << std::endl;
	_hitPoints -= amount;
	_energyPoints -= amount;
	std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energypoints" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}
