#pragma once

#include "ClapTrap.hpp"
#include <cstdlib>
#include <iostream>

class FragTrap : public ClapTrap {
  public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap& cp);
	~FragTrap();
	FragTrap& operator=(const FragTrap& cp);
	void	  highFiveGuys();
};
