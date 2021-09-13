#pragma once

#include "ScavTrap.hpp"
#include <cstdlib>
#include <iostream>

class FragTrap : public virtual ScavTrap {
  public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& cp);
	~FragTrap();
	FragTrap& operator=(const FragTrap& cp);
	void	  highFiveGuys();
};
