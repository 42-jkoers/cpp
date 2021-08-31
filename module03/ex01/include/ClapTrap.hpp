#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <algorithm>
#include <cstdlib>
#include <iostream>

#define HITPOINTS 100
#define ENERGYPOINTS 50
#define ATTACKDAMAGE 20

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

  protected:
	std::string	 name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
};

#endif
