#pragma once

#include <algorithm>
#include <cstdlib>
#include <iostream>

#define HITPOINTS 10
#define ENERGYPOINTS 10
#define ATTACKDAMAGE 0

class ClapTrap {
  public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& cp);

	void	  attack(const std::string& target);
	void	  takeDamage(unsigned int amount);
	void	  beRepaired(unsigned int amount);

  private:
	std::string	 name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
};
