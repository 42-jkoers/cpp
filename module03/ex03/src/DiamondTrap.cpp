#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : hitPoints(FragTrap::hitPoints),
							 energyPoints(ScavTrap::energyPoints) {
}

DiamondTrap::DiamondTrap(std::string name) : diamondTrapName(name) {
}

DiamondTrap::DiamondTrap(const DiamondTrap& cp) {
	*this = cp;
}

DiamondTrap::~DiamondTrap() {}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cp) {
}
