#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

  public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& original);
	FragTrap&	 operator=(const FragTrap& original);
	void		 attack(const std::string& target);
	virtual void highFivesGuys();
};
