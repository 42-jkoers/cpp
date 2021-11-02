#include "../include/FragTrap.hpp"

FragTrap::FragTrap() {
	_hitPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has entered the game" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has entered the game" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " has left the game" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original) {
	_attackDamage = original._attackDamage;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_name = original._name;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "good work, high five?!" << std::endl;
}
