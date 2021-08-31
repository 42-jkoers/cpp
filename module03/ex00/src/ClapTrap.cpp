
#include "ClapTrap.hpp"
#include <iostream>

// stupid cpp98
unsigned int max(unsigned int a, unsigned int b) {
	return a > b ? a : b;
}

ClapTrap::ClapTrap() : name("Greg the almighty"),
					   hitPoints(HITPOINTS),
					   energyPoints(ENERGYPOINTS),
					   attackDamage(ATTACKDAMAGE) {
	std::cout << "Claptrap " << name << " has received the gift of life" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name),
											 hitPoints(HITPOINTS),
											 energyPoints(ENERGYPOINTS),
											 attackDamage(ATTACKDAMAGE) {
	std::cout << "Claptrap " << name << " has received the gift of life" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	*this = src;
	std::cout << "Claptrap " << name << " has received the gift of life" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap " << name << " was obliterated" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	name = rhs.name;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Claptrap " << name << " recoverd " << amount << " HP" << std::endl;
	hitPoints = max(hitPoints + amount, HITPOINTS);
}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "Claptrap " << name << " received " << amount << " damage" << std::endl;
	hitPoints -= max(hitPoints, amount);
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "Claptrap " << name << " attacked " << target << " with " << attackDamage << " damage" << std::endl;
}
