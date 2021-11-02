#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

  private:
	std::string _name;
	using FragTrap::_attackDamage;
	using FragTrap::_hitPoints;
	using ScavTrap::_energyPoints;

  public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& original);

	using ScavTrap::attack;

	DiamondTrap& operator=(const DiamondTrap& original);
	void		 whoAmI();
};
