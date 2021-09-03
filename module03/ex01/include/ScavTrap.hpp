#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
  public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& cp);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& cp);
	void	  guardGate();
};
