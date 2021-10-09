#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
  public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& cp);
	virtual ~DiamondTrap();

  private:
	std::string name;
	DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& cp);
};
