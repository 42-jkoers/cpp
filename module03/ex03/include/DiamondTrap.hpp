#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
  public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& cp);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& cp);

  private:
	std::string diamondTrapName;
};
