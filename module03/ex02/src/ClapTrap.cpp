
#include "ClapTrap.hpp"
#include <iostream>

// stupid cpp98
unsigned int max(unsigned int a, unsigned int b) {
	return a > b ? a : b;
}

ClapTrap::ClapTrap() : name("Greg the almighty"),
					   hitPoints(HITPOINTS),
					   energyPoints(ENERGYPOINTS),
					   attackDamage(ATTACKDAMAGE),
					   initalHitPoints(hitPoints),
					   initialEnergyPoints(energyPoints),
					   initialAttackDamage(attackDamage) {
	std::cout << "Claptrap " << name << " has received the gift of life " << hitPoints << " " << energyPoints << " " << attackDamage << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name),
											 hitPoints(HITPOINTS),
											 energyPoints(ENERGYPOINTS),
											 attackDamage(ATTACKDAMAGE),
											 initalHitPoints(hitPoints),
											 initialEnergyPoints(energyPoints),
											 initialAttackDamage(attackDamage) {
	std::cout << "Claptrap " << name << " has received the gift of life " << hitPoints << " " << energyPoints << " " << attackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string	name,
				   unsigned int hitPoints,
				   unsigned int energyPoints,
				   unsigned int attackDamage) : name(name),
												hitPoints(hitPoints),
												energyPoints(energyPoints),
												attackDamage(attackDamage),
												initalHitPoints(hitPoints),
												initialEnergyPoints(energyPoints),
												initialAttackDamage(attackDamage) {
	std::cout << "Claptrap " << name << " has received the gift of life " << hitPoints << " " << energyPoints << " " << attackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap " << name << " was obliterated" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cp) {
	hitPoints = cp.hitPoints;
	energyPoints = cp.energyPoints;
	attackDamage = cp.attackDamage;
	initalHitPoints = cp.initalHitPoints;
	initialEnergyPoints = cp.initialEnergyPoints;
	initialAttackDamage = cp.initialAttackDamage;
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Claptrap " << name << " recoverd " << amount << " HP" << std::endl;
	hitPoints = max(hitPoints + amount, initalHitPoints);
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Claptrap " << name << " received " << amount << " damage" << std::endl;
	hitPoints -= max(hitPoints, amount);
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "Claptrap " << name << " attacked " << target << " with " << attackDamage << " damage" << std::endl;
}
