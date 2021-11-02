#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

  public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& original);
	void		 attack(const std::string& target);
	ScavTrap&	 operator=(const ScavTrap& original);
	virtual void guardGate();
};
